#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    FILE *f1, *f2;
    char s[150];
    f1 = fopen("names.txt", "r");
    f2 = fopen("result.txt", "w");
    
    if (f1 == NULL) {
        printf("error");
        return 1;
    }
    
    while(fgets(s, sizeof(s), f1)) {
        int god;
        if(sscanf(s, "%*s%*s%*s%d", &god) == 1) {
            if(god > 1980) {
                fprintf(f2, "%s", s);
            }
        }
    }
    
    fclose(f1);
    fclose(f2);
    
    return 0;
}
