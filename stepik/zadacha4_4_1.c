#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
int speed;
int izmenenie;

printf("vvedite skorost: ");
scanf("%d", &speed);

printf("vvedite razgon: ");
scanf("%d", &izmenenie);

if(izmenenie > 0){
    speed = speed + 10;
    printf("%d", speed);
} else if(izmenenie < 0){
    speed = speed - 10;
    printf("%d", speed);
} else{
    speed = speed;
    printf("%d", speed);
}


return 0;
}