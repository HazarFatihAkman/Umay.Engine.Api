#include "../include/node_2d.h"
#include "../include/print.h"

#include <unistd.h>

#define PROPERTY_NAME "node2d_t"

node2d_t node2_new(
  uint32_t id,
  vec2_t position,
  uint32_t flags,
  uint32_t asset_flags
) {
  return (node2d_t) {
    .id = id,
    .position = position,
    .flags = flags,
    .asset_flags = asset_flags
  };
}

uint8_t node2d_set_position(node2d_t *node2d, const vec2_t v) {
  if (node2d == NULL) {
    PRINT_NULL_ERR(PROPERTY_NAME);
    return 0;
  }

  node2d->position = v;
  return 1;
}

uint8_t node2d_set_flags(node2d_t *node2d, const uint32_t flags) {
  if (node2d == NULL) {
    PRINT_NULL_ERR(PROPERTY_NAME);
    return 0;
  }

  node2d->flags = flags;
  return 1;
}

uint8_t node2d_set_asset_flags(node2d_t *node2d, const uint32_t asset_flags) {
  if (node2d == NULL) {
    PRINT_NULL_ERR(PROPERTY_NAME);
    return 0;
  }

  node2d->asset_flags = asset_flags;
  return 1;
}

void node2d_print(const node2d_t node2d) {
  print_info(PROPERTY_NAME, NODE2D_LOG_FORMAT, node2d.id, node2d.flags, node2d.asset_flags);
  vec2_print(node2d.position);
}

