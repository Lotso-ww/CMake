# 1. 设置最低版本
cmake_minimum_required(VERSION 3.18)

# 2. 设置项目名称
project(TestInclude)

# 3. 打印内置路径变量

message(STATUS "from top-level CMakeLists.txt")
# 打印, 当前正在执行的源代码目录 -- CMakeLists.txt的所在目录
message(STATUS "CMAKE_CURRENT_SOURCE_DIR: " ${CMAKE_CURRENT_SOURCE_DIR})
# 打印, 当前正在执行的cmake脚本的完整名称
message(STATUS "CMAKE_CURRENT_LIST_FILE: " ${CMAKE_CURRENT_LIST_FILE})
# 打印, 当前正在执行的cmake脚本的全目录
message(STATUS "CMAKE_CURRENT_LIST_DIR: " ${CMAKE_CURRENT_LIST_DIR})

# 4. 包含子目录的cmake脚本
include(sub/sub.cmake)