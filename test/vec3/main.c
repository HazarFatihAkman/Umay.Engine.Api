#include "../../include/vec3.h"
#include <unistd.h>

int main(int argv, char *args[]) {
  vec3_t v1 = vec3_new(0, 0, 0);
  vec3_print(v1);

  vec3_set(&v1, 10, 0, 0);
  vec3_print(v1);

  vec3_zero(&v1);
  vec3_print(v1);
  return 0;
}

