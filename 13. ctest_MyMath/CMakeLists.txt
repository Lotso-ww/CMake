cmake_minimum_required(VERSION 3.18)

project(TestMyMath
    LANGUAGES CXX 
)

# 1. 开启测试功能
include(CTest)

# 2. 添加测试文件
add_executable(main main.cpp)

# 3. 查找 MyMath 库
find_package(MyMath CONFIG REQUIRED)

# 4. 链接 MyMath 库
target_link_libraries(main PRIVATE MyMath::MyMath)

# 5. 添加测试Case 到 CTest
add_test(
    NAME TestMyMath
    COMMAND main
)