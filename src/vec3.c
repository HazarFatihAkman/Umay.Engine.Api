#include "../include/vec3.h"
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

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
  if (v == NULL) return 0;
  v->x = x;
  v->y = y;
  v->z = z;
  return 1;
}

void vec3_print(const vec3_t v) {  
  int size = snprintf(NULL, 0, VEC3_LOG_FORMAT, v.x, v.y, v.z);
  if (size <= 0) return;
  ++size;

  char formatted[size];
  snprintf(formatted, size, VEC3_LOG_FORMAT, v.x, v.y, v.z);
  formatted[size] = '\0';
  write(STDOUT_FILENO, formatted, size+1);
}

