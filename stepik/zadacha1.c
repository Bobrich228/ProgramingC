#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){ 
    int digit1, digit2, digit3, digit4, digit5, digit6;
    printf("vvedite 6 snachnoe chislo: ");
    scanf("%1d%1d%1d%1d%1d%1d", &digit1, &digit2, &digit3, &digit4, &digit5, &digit6);

    if(digit1 == digit4 && digit2 == digit5 && digit3 == digit6){
        printf("1");
    }  else {
        printf("0");
    } 

return 0;    
}