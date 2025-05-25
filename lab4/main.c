#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include "treyg.h"

int main() {
    double a, b, c;
    printf("Vvedite a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    if (norm(a, b, c)) {
        printf("Perimetr: %lf\n", perim(a,b,c));
        printf("Ploshad: %lf", ploshad(a,b,c));
    } else {
        printf("zalupa");
    }

    return 0;
}




