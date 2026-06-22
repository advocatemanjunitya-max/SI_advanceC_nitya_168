#include <stdio.h>

int main() {
    int n, square, sum, temp;

    printf("Neon numbers between 1 and 100 are:\n");

    for (n = 1; n <= 100; n++) {
        square = n * n;
        temp = square;
        sum = 0;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == n) {
            printf("%d ", n);
        }
    }

    return 0;
}