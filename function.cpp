//
// Created by 王政凯 on 2024/4/14.
//

#include "function.h"

int  function::gcl(int a, int b) {
    return b == 0 ? a : gcl(b, a % b);
}