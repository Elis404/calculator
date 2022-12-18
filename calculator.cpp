#include <iostream>
#include "calculator.h"

double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}

double percent_of(double a) {
    return a / 100;
}

double pow(double a, double n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= a;
    }
    return res;
}

double factorial(double a) {
    return a <= 1 ? a : factorial(a - 1) * a;
}


