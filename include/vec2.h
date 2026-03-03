#ifndef UMAY_ENGINE_API_VEC_2_H
#define UMAY_ENGINE_API_VEC_2_H

#include <stdint.h>

#define VEC2_LOG_FORMAT "x = %.2f y = %.2f"

typedef struct vec2 {
  float x;
  float y;
} vec2_t;

vec2_t vec2_new(float x, float y);

uint8_t vec2_zero(vec2_t *v);
uint8_t vec2_set(vec2_t *v, float x, float y);
void vec2_print(const vec2_t v);

#endif //UMAY_ENGINE_API_VEC_2_H

