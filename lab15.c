#include <stdio.h>

void print_forward(long long n) {
    if (n == 0)
        return;
    print_forward(n / 10);
    printf("%lld ", n % 10);
}

void print_backward(long long n) {
    if (n == 0)
        return;
    printf("%lld ", n % 10);
    print_backward(n / 10);
}

int main() {
    long long n;
    scanf("%lld", &n);

    if (n == 0) {
        printf("0\n0\n");
        return 0;
    }

    print_forward(n);
    printf("\n");
    print_backward(n);
    printf("\n");

    return 0;
}

