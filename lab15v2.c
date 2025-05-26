#include <stdio.h>

void print_forward(char n[], int i){
    if (n[i] == '\0')
        return;
    print_forward(n, i + 1);
    printf("%c ", n[i]);
}
void print_backward(char n[], int i){
    if (n[i] == '\0')
        return;
    printf("%c ", n[i]);
    print_backward(n, i + 1);
}
int main(){
    char n[256];
    scanf("%s", &n);
    print_backward(n,0);
    printf("\n");
    print_forward(n, 0);
    printf("\n");
    return 0;
}
