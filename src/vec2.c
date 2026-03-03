#include "../include/vec2.h"
#include "../include/print.h"

#include <unistd.h>

#define PROPERTY_NAME "vec2_t"

vec2_t vec2_new(float x, float y) {
 return (vec2_t) { x = x, y = y };  
}

uint8_t vec2_zero(vec2_t *v) {
  v->x = 0;
  v->y = 0;
  return 1;
}

uint8_t vec2_set(vec2_t *v, float x, float y) {
  if (v == NULL) {
    print_err("vec2_t", "Cannot be null!");
    return 0;
  }

  v->x = x;
  v->y = y;
  return 1;
}

void vec2_print(const vec2_t v) {
  print_info(PROPERTY_NAME, VEC2_LOG_FORMAT, v.x, v.y);
}

