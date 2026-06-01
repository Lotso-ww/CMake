cmake_minimum_required(VERSION 3.18)

project(IfBasicExprDemo)

# 1 命名常量真
if("ON")
    message("1: true")
else()
    message("1: false")
endif()

# 2 命名常量假
if("NOTFOUND")
    message("2: true")
else()
    message("2: false")
endif()

# 3 数字真
if("1.1")
    message("3: true")
else()
    message("3: false")
endif()

# 4 数字假
if("0")
    message("4: true")
else()
    message("4: false")
endif()

# 5 不能转换为数字的字符串
if("123A")
    message("5: true")
else()
    message("5: false")
endif()

# 6 变量真
set(OS "linux")
if(OS)
    message("6: true")
else()
    message("6: false")
endif()

# 7 变量假
set(OS "OFF")
if(OS)
    message("7: true")
else()
    message("7: false")
endif()

# 8 字符串字面量-普通
if("abc")
    message("8: true")
else()
    message("8: false")
endif()

# 9 字符串字面量-常量
if("on")
    message("9: true")
else()
    message("9: false")
endif()

# 10 环境变量
message("OS: $ENV{OS}")
if($ENV{OS})
    message("10: true")
else()
    message("10: false")
endif()


# 11 变量和 7 对应 if(${})
set(OS "ON")
if(${OS})
    message("11: true")
else()
    message("11: false")
endif()

# 12 NOT
if(NOT "ON")
    message("12: true")
else()
    message("12: false")
endif()

# 13 AND
if("ON"  AND  "OFF")
    message("13: true")
else()
    message("13: false")
endif()

# 14 OR
if("ON"  OR  "OFF")
    message("14: true")
else()
    message("14: false")
endif()

# 15 COMMAND 检测
if(COMMAND project)
    message("15: true")
else()
    message("15: false")
endif()

# 16 target 检测
add_library(MyMath INTERFACE IMPORTED)
if(TARGET MyMath_static)
    message("16: true")
else()
    message("16: false")
endif()

# 17 DEFINED  普通变量是否定义 检测
set(NAME "bit")
if(DEFINED NAME)
    message("17: true")
else()
    message("17: false")
endif()

# 18 DEFINED  缓存变量是否定义 检测
set(AGE "18" CACHE STRING "age")
if(DEFINED CACHE{AGE})
    message("18: true")
else()
    message("18: false")
endif()

# 19 DEFINED  环境变量是否定义 检测
if(DEFINED ENV{EMAIL})
    message("19: true")
else()
    message("19: false")
endif()

# 20 file 文件存在性检测
if(EXISTS ${CMAKE_CURRENT_LIST_DIR}/main.cpp)
    message("20: true")
else()
    message("20: false")
endif()

# 21 file 文件存在性检测
if(EXISTS "")
    message("21: true")
else()
    message("21: false")
endif()

# 22 file 文件存在性检测
if(EXISTS "./CMakeLists.txt")
    message("22: true")
else()
    message("22: false")
endif()

# 23 实数比较
if("20" LESS "30")
    message("23: true")
else()
    message("23: false")
endif()

# 24 字符串比较
if("abc" STRLESS "abd")
    message("24: true")
else()
    message("24: false")
endif()

# # 25 版本号比较
# set(VERSION "1.2.3")
# if(VERSION VERSION_LESS "1.3.0")
#     message("25: true")
# else()
#     message("25: false")
# endif()
