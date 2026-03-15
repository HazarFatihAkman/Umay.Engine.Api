#ifndef UMAY_ENGINE_API_ASSET_MANAGER_H
#define UMAY_ENGINE_API_ASSET_MANAGER_H

#include <stdint.h>

#define FOLDER_PATH "assets/"
#define PATH_LEN 128

typedef struct asset_route {
  uint32_t flag;
  char path[PATH_LEN];
} asset_route_t;

void init_asset_manager(asset_route_t asset_routes[]);
char *find_asset_folder_by_flag(uint32_t flag, const char *ext);

#endif // UMAY_ENGINE_API_ASSET_MANAGER_H

