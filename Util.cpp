//
// Created by 王政凯 on 2024/4/14.
//

#include "Util.h"

int  Util::getGCD(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}