#include "calculator.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

// 完善除法函数
int divide(int a, int b) {
    if (b != 0) {
        printf("执行除法运算: %d / %d\n", a, b);
        return a / b;
    } else {
        printf("错误：除数不能为0\n");
        return 0;
    }
}

// 新增幂运算函数
int power(int base, int exponent) {
    printf("执行幂运算: %d ^ %d\n", base, exponent);
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}