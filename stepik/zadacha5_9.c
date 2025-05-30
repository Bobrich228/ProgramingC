#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    double group;
    double groupRating;
    int avg_groupRating;
    double studentRating;

    printf("Chislo gruppi: ");
    scanf("%lf", &group);
    
    for(int i = 0; i < group; i++){
        printf("VVedite ocenki: ");
        scanf("%lf", &studentRating);
        groupRating += studentRating;
    }

    avg_groupRating = groupRating / group;
    printf("AVG - %d\n", avg_groupRating);
    
    double avg_groupRating1;
    avg_groupRating1 = (double)groupRating / group;
    printf("AVG - %lf", avg_groupRating1);




return 0;
}