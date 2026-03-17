#include "../include/asset_manager.h"
#include "../include/print.h"

#include <stdint.h>
#include <unistd.h>
#include <stdio.h>

static const asset_route_t *g_asset_routes = NULL;

void init_asset_manager(const asset_route_t asset_routes[]) {
  g_asset_routes = asset_routes;
}

char *find_asset_folder_by_flag(uint32_t flag, const char *ext) {
  if (g_asset_routes == NULL) {
    PRINT_NULL_ERR("asset_routes"); 
    return NULL;
  }

  uint32_t index = flag / 1000;
  uint32_t asset_id = flag % 1000;

  static char final_path[PATH_LEN];
  snprintf(final_path,
    PATH_LEN,
    "%s%s/%04u.%s",
    FOLDER_PATH,
    g_asset_routes[index].path,
    asset_id,
    ext
  );

  return final_path;
}

