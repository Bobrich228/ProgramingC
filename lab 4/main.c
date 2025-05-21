#include <stdio.h>
#include <string.h>
#include <math.h>
#include "treyg.h"
#include <stdbool.h>

int main() {
    double a, b, c;
    printf("Vvedite a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (norm(a, b, c)) {
        printf("Perimetr: %.1f\n", perim);
        printf("Ploshad: %.1f\n", ploshad);
    } else {
        printf("zalupa\n");
    }

    return 0;
}




