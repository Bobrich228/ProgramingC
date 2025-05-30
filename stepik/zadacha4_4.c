#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
int rating;
char grade;

printf("VVedite ocenky: ");
scanf("%d", &rating);

if(rating <= 60)
{
   grade = 'u';  // неудовлетворительная оценка
}
else if(rating <= 75)
{
   grade = 's';  // удовлетворительная оценка
}
else if(rating <= 100)
{
   grade = 'g';  // хорошая оценка
}
else
{
   grade = 'e';  // отличная оценка
}

printf("Ocenka: %c", grade);
return 0;
}