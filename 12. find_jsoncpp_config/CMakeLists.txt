cmake_minimum_required(VERSION 3.18)

project(TestJsonCpp
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)

# 使用Config模式, 查找jsoncpp
find_package(jsoncpp CONFIG REQUIRED)

# 添加构建目标
add_executable(main main.cpp)

# 链接JsonCpp
# target_link_libraries(main PRIVATE JsonCpp::JsonCpp)
# target_link_libraries(main PRIVATE jsoncpp_static)
target_link_libraries(main PRIVATE jsoncpp_lib)