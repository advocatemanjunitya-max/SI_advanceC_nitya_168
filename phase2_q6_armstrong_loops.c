#include <stdio.h>

int main() {
    int n, a, b, c;

    scanf("%d", &n);

    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    if (a*a*a + b*b*b + c*c*c == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}