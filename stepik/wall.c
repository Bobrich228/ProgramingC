#include <stdio.h>
#include <math.h>

int main(){
double required_amount_of_paint; 
double paint_can_volume;
double wall;

scanf("%lf", &required_amount_of_paint);
scanf("%lf", &paint_can_volume);


wall = (required_amount_of_paint / paint_can_volume);
printf("%lf", wall);
return 0;
}




