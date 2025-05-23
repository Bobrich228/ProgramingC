#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include <limits.h> 


int sum(int n, ...);
int max(int n, ...);
int min(int n, ...);
double avg(int n, ...);


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

int main(void)
{
    printf("Sum: %d \n", sum(5, 1, 2, 3, 4, 5));        // 15
    printf("Min: %d \n", min(5, 1, 2, 3, 9, 4));        // 1
    printf("Max: %d \n", max(5, 1, 2, 3, 6, 4));        // 6
    printf("Avg: %.2lf \n", avg(5, 1, 2, 3, 10, 4));    // 4.00
    return 0;
}