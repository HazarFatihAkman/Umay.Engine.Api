#ifndef UMAY_ENGINE_API_VEC_3_H
#define UMAY_ENGINE_API_VEC_3_H

#include <stdint.h>

#define VEC3_LOG_FORMAT "[Position]:\n  x = %.2f\n  y = %.2f\n  z = %.2f\n"

typedef struct vec3 {
  float x;
  float y;
  float z;
} vec3_t;

/**
 * Creates a new 3D vector.
 * The x-axis component.
 * The y-axis component.
 * The z-axis component.
 * A initialized vec3_t structure.
 */
vec3_t vec3_new(float x, float y, float z);

/**
 * Reset 3D vector position.
 * The x-axis = 0.
 * The y-axis = 0.
 * The z-axis = 0.
 */
uint8_t vec3_zero(vec3_t *v);

/**
 * Re-position 3D vector.
 * The x-axis -> v.z = x.
 * The y-axis -> v.y = y.
 * The z-axis -> v.z = z.
 */
uint8_t vec3_set(vec3_t *v, float x, float y, float z);

/**
* Print the 3D vec position.
* Uses write method.
*/
void vec3_print(const vec3_t v);

#endif // UMAY_ENGINE_API_VEC_3_H

