#include "../../include/node_3d.h"

int main(int argv, char *args[]) {
  vec3_t node_p = vec3_new(0, 0, 0);
  node3d_t node = node3d_new(0, node_p, 0, 0);
  node3d_print(node);
  vec3_set(&node.position, 10, 10, 0);
  node3d_print(node);

  vec3_set(&node.position, 15, 15, 0);
  node3d_print(node);

  vec3_set(&node.position, 20, 20, 0);
  node3d_print(node);

  vec3_set(&node.position, 25, 0, 0);
  node3d_print(node);
  return 0;
}
