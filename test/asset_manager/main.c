#include "../../include/asset_manager.h"
#include "../../include/print.h"

static const asset_route_t assets[] = {
  { 1000, "building" },
  { 2000, "mobs" },
  { 3000, "npcs" },
  { 4000, "materials" }
};

int main(int argv, char *args[]) {
  init_asset_manager(assets);
  char *asset_route = find_asset_folder_by_flag(1001, "obj");
  print_info("asset_route", "%s", asset_route);
  return 0;
}

