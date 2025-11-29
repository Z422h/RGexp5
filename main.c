#include <stdio.h>
#include "calculator.h"

int main() {
    printf("=== 增强版计算器 ===\n");
    
    int a = 10, b = 5;
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, subtract(a, b));
    printf("%d * %d = %d\n", a, b, multiply(a, b));
    
    // 使用新增功能
    printf("%d / %d = %d\n", a, b, divide(a, b));
    printf("%d ^ %d = %d\n", a, b, power(a, b));
    
    return 0;
}