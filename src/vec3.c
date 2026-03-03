#include "../include/vec3.h"
#include "../include/print.h"

#include <stdint.h>
#include <unistd.h>

#define PROPERTY_NAME "vec3_t"

vec3_t vec3_new(float x, float y, float z) {
  return (vec3_t) { x = x, y = y, z = z };
}

uint8_t vec3_zero(vec3_t *v) {
  v->x = 0;
  v->y = 0;
  v->z = 0;
  return 1;
}

uint8_t vec3_set(vec3_t *v, float x, float y, float z) {
  if (v == NULL) {
    PRINT_NULL_ERR(PROPERTY_NAME);
    return 0;
  }

  v->x = x;
  v->y = y;
  v->z = z;
  return 1;
}

void vec3_print(const vec3_t v) {
  print_info("vec3_t", VEC3_LOG_FORMAT, v.x, v.y, v.z);
}

