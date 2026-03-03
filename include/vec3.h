#ifndef UMAY_ENGINE_API_VEC_3_H
#define UMAY_ENGINE_API_VEC_3_H

#include <stdint.h>

#define VEC3_LOG_FORMAT "x = %.2f y = %.2f z = %.2f"

typedef struct vec3 {
  float x;
  float y;
  float z;
} vec3_t;

vec3_t vec3_new(float x, float y, float z);
uint8_t vec3_zero(vec3_t *v);
uint8_t vec3_set(vec3_t *v, float x, float y, float z);
void vec3_print(const vec3_t v);

#endif // UMAY_ENGINE_API_VEC_3_H

