#ifndef UMAY_ENGINE_API_NODE_3D_H
#define UMAY_ENGINE_API_NODE_3D_H

#include "vec3.h"

#include <stdint.h>

#define NODE3D_LOG_FORMAT "id = %u flags = %u asset_flags = %u"

typedef struct node3d {
  uint32_t id;
  vec3_t position;  
  uint32_t flags;
  uint32_t asset_flags;
} node3d_t;

/**
 * Creates a new node3d.
 * The id should be unique for every obj.
 * The position is vec3_t.
 * The flags is for what you need like active, destructible, etc.
 * The asset_flags is storing the type of obj folder, obj file id,
 *  texture folder and texture file id.
 * Check asset_manager_t usage for how you should use asset_flags.
 */
node3d_t node3d_new(uint32_t id, vec3_t position, uint32_t flags, uint32_t asset_flags);
uint8_t node3d_set_position(node3d_t *node3d, const vec3_t v);
uint8_t node3d_set_flags(node3d_t *node3d, const uint32_t flags);
uint8_t node3d_set_asset_flags(node3d_t *node3d, const uint32_t asset_flags);
void node3d_print(const node3d_t node3d);

#endif // UMAY_ENGINE_API_NODE_3D_H

