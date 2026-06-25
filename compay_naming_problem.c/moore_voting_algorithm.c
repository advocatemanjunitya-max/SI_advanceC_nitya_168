#include <stdio.h>

int main() {
    int arr[] = {2, 2, 1, 2, 3, 2};
    int n = 6;

    int candidate = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate)
            count++;
        else
            count--;

        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    printf("Majority Element = %d\n", candidate);

    return 0;
}