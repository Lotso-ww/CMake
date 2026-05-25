#include <iostream>
#include "math/math.h"
#include <cassert>

int main()
{
    // 1. 测试加法
    assert(add(2,3) == 5);

    // 2. 测试减法
    assert(sub(2,3) == -1);

    std::cout << "Test OK" << std::endl;
    return 0;
}