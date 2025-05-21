#include <stdio.h>
#include <string.h>

int main() {
    char array[81];
    printf("Slovo: ");
    scanf("%80s", array);
    for(int i = 0; array[i] != '\0'; i++){
        if(array[i] == 'a') {
            array[i] = 'A';
    } else if(array[i] == 'b') {
            array[i] = 'B';
    }
}
    printf("novoe slovo - %s\n", array);
    return 0;
}