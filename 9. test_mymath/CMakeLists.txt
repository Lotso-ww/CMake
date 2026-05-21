cmake_minimum_required(VERSION 3.18)

project(testMyMath
    LANGUAGES CXX 
)

add_executable(main main.cpp)

# 4. 查找 MyMath 数学库
find_package(MyMath CONFIG REQUIRED)

# 5. 声明依赖
target_link_libraries(main PRIVATE MyMath::MyMath)