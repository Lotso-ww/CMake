cmake_minimum_required(VERSION 3.18)

project(FunctionDemo)

function(print_args first second)
    message("ARGC = ${ARGC}")      # 实参总个数
    message("ARGV = ${ARGV}")      # 实参列表；分隔开的字符串
    message("ARGV0 =${ARGV0}")     # 第一个实参
    message("ARGV1 =${ARGV1}")     # 第二个实参
    message("ARGV2 =${ARGV2}")     # 第三个实参
    message("ARGN = ${ARGN}")      # 剩余的实参列表
endfunction()

print_args(A B C D E)


