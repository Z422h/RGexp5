#include <stdio.h>
#include "calculator.h"

int main() {
    printf("简易计算器\n");
    
    int a = 10, b = 5;
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, subtract(a, b));
    
    return 0;
}