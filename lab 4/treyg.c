#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include "treyg.h"

double perim(double a, double b, double c) {
    return a+b+c;
}

double ploshad(double a, double b, double c) {
    double p = perim(a, b, c) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

bool norm(double a, double b, double c) {
    return (a+b > c) && (a+c > b) && (b+c > a);
}
