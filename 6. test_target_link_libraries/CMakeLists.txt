cmake_minimum_required(VERSION 3.18)

project(TESTLINKLIBRARIES
    LANGUAGES CXX
)

add_subdirectory(app)

add_executable(main main.cpp)

# 依赖库列表
target_link_libraries(main PRIVATE add)
