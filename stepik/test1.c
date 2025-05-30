#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float excel, good, avg;
    char neud;
    float average;
    printf("vvedite scolko 5: ");
    scanf("%f", &excel);
    printf("vvedite scolko 4: ");
    scanf("%f", &good);
    printf("vvedite scolko 3: ");
    scanf("%f", &avg);

    //while (getchar() != '\n');

    printf("Est li 2? (y or n): ");
    scanf(" %c", &neud);

    if (neud == 'y' || neud == 'Y'){
        printf("Zacheta nebude \n");
        return 0;
    } 

    average = (5.0 * excel + 4.0 * good + 3.0 * avg) / 
    (excel + good + avg);
    printf("Average: %f\n", average);
    
    return 0;

    /* average = (5.0 * excel + 4.0 * good + 3.0 * avg) / (excel + good + avg);
    printf("Average = ");
    printf("%.2f", average);
    return 0;  */
}