cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(v3_test VERSION 1.0.0)
add_executable(v3_test main.c
  ../../src/vec3.c
  ../../src/print.c
)

add_test(NAME Vec3Test COMMAND v3_test)

