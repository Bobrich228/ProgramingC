#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double a,b,c;
    double x1,x2,d;
    char choice;
    
    do {
    printf("напиши a,b,c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    d = b*b-4*a*c;
    
    if(d > 0){
        x1 = -b*sqrt(d)/(2*a);
        x2 = b*sqrt(d)/(2*a);
        printf("x1 %lf \n",x1);
        printf("x2 %lf \n",x2);
    } else if(d == 0){
        x1 = -b*sqrt(d)/(2*a);
        printf("x1 %lf \n",x1);
    } else {
        printf("Нет корня \n");
    }
        printf("Продолжить? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("канец \n");
    return 0;
}
