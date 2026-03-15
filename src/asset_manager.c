#include "../include/asset_manager.h"

#include <stdint.h>
#include <unistd.h>

static const asset_route_t *asset_route;

void init_asset_manager(asset_route_t asset_routes[]) {
  asset_routes = asset_routes;
}

//TODO: find a algorithm for the finding asset_route by flag.
char *find_asset_folder_by_flag(uint32_t flag, const char *ext) {
  uint32_t prefix_idx = flag / 1000;
  uint32_t asset_id = flag % 1000;

  int path_len = snprintf(NULL, 0,FOLDER_PATH + "%s/%04u.%s");
  return NULL;
}

