#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include <limits.h>
#include "func.h"

int sum(int n, ...) {
    int res = 0;
    va_list args;
    va_start(args, n);
    
    for (int i = 0; i < n; i++) {
        res += va_arg(args, int);
    }
    
    va_end(args);
    return res;
}

int max(int n, ...) {
    int res = INT_MIN;
    va_list args;
    va_start(args, n);
    
    for (int i = 0; i < n; i++) {
        int val = va_arg(args, int);
        if (val > res) res = val;
    }
    
    va_end(args);
    return res;
}

int min(int n, ...) {
    int res = INT_MAX;
    va_list args;
    va_start(args, n);
    
    for (int i = 0; i < n; i++) {
        int val = va_arg(args, int);
        if (val < res) res = val;
    }
    
    va_end(args);
    return res;
}

double avg(int n, ...) {
    int sum = 0;
    va_list args;
    va_start(args, n);
    
    for (int i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }
    
    va_end(args);
    return (double)sum / n;
}