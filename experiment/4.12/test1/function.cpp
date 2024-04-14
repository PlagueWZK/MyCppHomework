#include"function.h"
int static gcl(int a,int b) {
    return b==0?a:gcl(b,a%b);
}