#ifndef UMAY_ENGINE_API_NODE_2D_H
#define UMAY_ENGINE_API_NODE_2D_H

#include "vec2.h"

#include <stdint.h>

#define NODE2D_LOG_FORMAT "id = %u flags = %u asset_flags = %u"

typedef struct node2d {
  uint32_t id;
  vec2_t position;
  uint32_t flags;
  uint32_t asset_flags;
} node2d_t;

/**
 * Creates a new node2d.
 * The id should be unique for every obj.
 * The position is vec2_t.
 * The flags is for what you need like active, destructible, etc.
 * The asset_flags is storing the type of obj folder, obj file id,
 *  texture folder and texture file id.
 * Check asset_manager_t usage for how you should use asset_flags.
 */
node2d_t node2_new(uint32_t id, vec2_t position, uint32_t flags, uint32_t asset_flags);
uint8_t node2d_set_position(node2d_t *node2d, const vec2_t v);
uint8_t node2d_set_flags(node2d_t *node2d, const uint32_t flags);
uint8_t node2d_set_asset_flags(node2d_t *node2d, const uint32_t asset_flags);
void node2d_print(const node2d_t node2d);

#endif //UMAY_ENGINE_API_NODE_2D_H

