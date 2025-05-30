#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int month;
    
    printf("vvedite nomer mesaca: ");
    scanf("%d", &month);

    if(month == 4 || month == 6){
        printf("30");
    } else if(month == 1 || month == 3 || month == 5){
        printf("31");
    } else if(month == 7 || month == 9 || month == 11){
        printf("30");
    } else if(month == 8 || month == 10 || month == 12){
        printf("31");
    } else if(month == 2){
        printf("28");
    } else {
        printf("Eblan");
    }


return 0;    
}