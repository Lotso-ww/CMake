# 1. 搜集文件列表
file(GLOB SRC_LISTS "*.cpp")

# 2. 添加构建目标
add_executable(main ${SRC_LISTS})

# 3. 添加库依赖列表
target_link_libraries(main PRIVATE MyMath)

# 4. 修改默认的输出路径
set_target_properties(main PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# 输出静态库的全路径
add_custom_command(
    TARGET main POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo "$<TARGET_FILE:MyMath>"
    COMMENT "输出静态库的全路径"
)