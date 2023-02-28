// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double value1 = value;
    for (int i = 0; i < n-1; ++i) {
        value1 *= value;
    }
    return value1;
}

uint64_t fact(uint16_t n) {
    uint64_t a = 1;
    for (int i = 1; i <= n; ++i) {
        a *= i;
    }
    return a;
}

double calcItem(double x, uint16_t n) {
    return (pown(x, n)) / fact(n);
}

double expn(double x, uint16_t count) {
    double exp=1;
    for (int i = 1; i <= count; ++i) {
        exp += calcItem(x, i);
    }
    return exp;
}

double sinn(double x, uint16_t count) {
    double sin = x;
    int a = 3;
    for (int i = 2; i <= count; i++) {
        if (!(i % 2)) {
            sin -= calcItem(x, a);
        } else {
            sin += calcItem(x, a);
        }
        a += 2;
    }
    return sin;
}

double cosn(double x, uint16_t count) {
    double cos = 1;
    int a = 2;
    for (int i = 2; i <= count; i++) {
        if (!(i % 2)) {
            cos -= calcItem(x, a);
        } else {
            cos += calcItem(x, a);
        }
        a += 2;
    }
    return cos;
}
