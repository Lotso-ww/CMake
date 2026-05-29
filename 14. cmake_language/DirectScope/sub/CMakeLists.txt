# 1. 读取初始值
message("1 sub: ${SCOP}")

# 2. 修改值
# set(SCOP "Sub Scop")
set(SCOP "Sub Scop" PARENT_SCOPE)

# 3. 查看修改之后的值
message("2 sub: ${SCOP}")
