#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int dni;
    
    printf("Den nedeli chislom: ");
    scanf("%d", &dni);
    if(dni < 6){
        printf("8");
    } else {
        printf("10");
    }

return 0;
}