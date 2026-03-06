cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(node3d_test VERSION 1.0.0)
add_executable(node3d_test main.c
  ../../src/vec3.c
  ../../src/print.c
  ../../src/node_3d.c
)

add_test(NAME Node3DTest COMMAND node3d_test)

