# 1. 设置最低版本
cmake_minimum_required(VERSION 3.18)

# 2. 设置项目名称
project(
    InstallHello
    VERSION 1.1.2
)

# 3. 添加构建项目
add_executable(hello main.cpp)

# 4. 安装
include(GNUInstallDirs)
install(TARGETS hello)


# 打印项目名称
message("PROJECT_NAME: ${PROJECT_NAME}")

# 打印项目版本
message("PROJECT_VERSION: ${PROJECT_VERSION}")
message("PROJECT_VERSION_MAJOR: ${PROJECT_VERSION_MAJOR}")

# 打印安装路径
message(STATUS "CMAKE_INSTALL_PREFIX: " ${CMAKE_INSTALL_PREFIX})