# 1. 设置最低版本
cmake_minimum_required(VERSION 3.18)

# 2. 设置项目名称
project(helloWorld)

# 3. 添加构建目标
add_executable(main main.cpp)
#生成测试二进制可执行程序
add_executable(testAdd test.cpp)

# 4. 集成单元测试
include(CTest)
add_test(
    Name Case_Add
    COMMAND testAdd
)

# 5. 本地安装
include(GNUInstallDirs)
install(TARGETS main)

# 6. 打包
include(CPack)