#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include <limits.h>
#include "func.h"

int sum(int n, ...) {
    int i;
    int res = 0;
    va_list factor;
    va_start(factor, n);

    for (i = 0; i < n; i++) {
        res += va_arg(factor, int);
    }
    va_end(factor);
    return res;
}


int max(int n, ...) {
    int i;
    int tmp;
    int res = INT_MIN;
    va_list factor;
    va_start(factor, n);

    for (i = 0; i < n; i++) {
        tmp = va_arg(factor, int);
        if (res < tmp) {
            res = tmp;
        }
    }
    va_end(factor);
    return res;
}


int min(int n, ...) {
    int i;
    int tmp;
    int res = INT_MAX;
    va_list factor;
    va_start(factor, n);

    for(i = 0; i < n; i++) {
        tmp = va_arg(factor, int);
        if(res > tmp) {
            res = tmp;
        }
    }
    va_end(factor);
    return res;
}


double avg(int n, ...) {
    int i;
    int tmp;
    int sum = 0;

    va_list factor;
    va_start(factor, n);

    for (i = 0; i < n; i++) {
        sum += va_arg(factor, int);
    }

    va_end(factor);
    return (double)sum / n;
}
