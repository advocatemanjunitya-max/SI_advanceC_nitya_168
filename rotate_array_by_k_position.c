#include <stdio.h>

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    k = k % n;   // Handle cases where k > n

    int result[n];

    for (int i = 0; i < n; i++) {
        result[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}