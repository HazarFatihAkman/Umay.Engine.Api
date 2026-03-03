#include "../include/node_3d.h"
#include "../include/print.h"

#include <stdint.h>
#include <unistd.h>

#define PROPERTY_NAME "node3d_t"

node3d_t node3d_new(
  uint32_t id,
  vec3_t position,
  uint32_t flags,
  uint32_t asset_flags
) {
  return (node3d_t) {
    .id = id,
    .position = position,
    .flags = flags,
    .asset_flags = asset_flags
  };
}

uint8_t node3d_set_position(node3d_t *node3d, const vec3_t v) {
  if (node3d == NULL) {
    PRINT_NULL_ERR(PROPERTY_NAME);
    return 0;
  }

  node3d->position = v;
  return 1;
}

uint8_t node3d_set_flags(node3d_t *node3d, const uint32_t flags) {
  if (node3d == NULL) {
    PRINT_NULL_ERR(PROPERTY_NAME);
    return 0;
  }

  node3d->flags = flags;
  return 1;
}

uint8_t node3d_set_asset_flags(node3d_t *node3d, const uint32_t asset_flags) {
  if (node3d == NULL) {
    PRINT_NULL_ERR(PROPERTY_NAME);
    return 0;
  }

  node3d->asset_flags = asset_flags;
  return 1;
}

void node3d_print(const node3d_t node3d) {
  print_info(PROPERTY_NAME, NODE3D_LOG_FORMAT, node3d.id, node3d.flags, node3d.asset_flags);
  vec3_print(node3d.position);
}

