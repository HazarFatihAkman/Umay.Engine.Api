cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(asset_manager_test VERSION 1.0.0)
add_executable(asset_manager_test main.c
  ../../src/asset_manager.c
  ../../src/print.c
)

add_test(NAME ASSETMANAGERTest COMMAND asset_manager_test)

