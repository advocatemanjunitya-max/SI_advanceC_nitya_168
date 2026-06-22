#include <stdio.h>

int main() {
    int N, i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d integers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);

    return 0;
}   