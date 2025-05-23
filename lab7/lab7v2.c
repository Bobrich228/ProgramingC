#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct humen {
    char name[50];
    char familia[50];
    int god;
} humen;

int main() {
    humen a1[4];
    humen a2[4];

    FILE *f1;
    f1 = fopen("names.txt", "r");
    if (f1 == NULL) {
        perror("eblan");
        return 1;
    }

    int i;
    for (i = 0; i < 4; i++) {
        if (fscanf(f1, "%s %s %d", a1[i].name, a1[i].familia, &a1[i].god) != 3){
            printf("Huita");
            fclose(f1);
            return 1;
        }
    }
    fclose(f1);

    memcpy(a2, a1, sizeof(a1));
    
    int k;
        k = 4;
        int tmp;
    bool xyi;
    for (i = k - 1; i >= 0; i--) {
        xyi = 1;
        int j;
        for (j = 0; j < i; j++) {
            if (a2[j].god > a2[j + 1].god) {
                tmp = a2[j].god;
                a2[j].god = a2[j+1].god;
                a2[j+1].god = tmp;
                xyi = 0;
            }
        }
        if (xyi == 1)
            break;
    }

    printf("a2:\n");
    for (i = 0; i < 4; i++) {
        printf("%s %s %d\n", a2[i].name, a2[i].familia, a2[i].god);
    }

    return 0;
}