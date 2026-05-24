# 1. 设置最低版本
cmake_minimum_required(VERSION 3.18)

# 2. 设置项目名称
project(TestMyMath)

# 3. 设置目录层级： 先是库的,再是使用方的
add_subdirectory(my_lib)
add_subdirectory(app)