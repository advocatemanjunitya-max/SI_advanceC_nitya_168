#include <stdio.h>

int main()
 {
    int arr[] = {1, 5, 9, 10, 12, 15, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Neon numbers in the array are:\n");

    for (int i = 0; i < n; i++);
    {
        int num = arr[i];
        int square = num * num;
        int sum = 0;

        while (square > 0) {
            sum += square % 10;
            square /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}