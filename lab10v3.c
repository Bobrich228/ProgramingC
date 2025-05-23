#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXIMUM(arr, size) ({ \
    int max_val = arr[0]; \
    for (int i = 1; i < size; i++) { \
        if (arr[i] > max_val) { \
            max_val = arr[i]; \
        } \
    } \
    max_val; \
})

int main() {
    int numbers[1000];  
    int count = 0;     
    printf("chisla: \n");

    while (scanf("%d", &numbers[count]) == 1 && count < 1000) {
        count++;
    }
    
    while (getchar() != '\n');
    
    if (count < 2) {
        printf("eror\n");
        return 1;
    }
    
    int max_number = MAXIMUM(numbers, count); 
    printf("max:  %d", max_number);
    
    return 0;
}