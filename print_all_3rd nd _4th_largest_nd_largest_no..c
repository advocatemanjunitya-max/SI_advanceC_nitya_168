#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {10, 45, 23, 67, 89, 34, 78};
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN, second = INT_MIN;
    int third = INT_MIN, fourth = INT_MIN;

    for (int i = 0; i < n; i++) {
        int x = arr[i];

        if (x > first) {
            fourth = third;
            third = second;
            second = first;
            first = x;
        }
        else if (x > second && x != first) {
            fourth = third;
            third = second;
            second = x;
        }
        else if (x > third && x != second && x != first) {
            fourth = third;
            third = x;
        }
        else if (x > fourth && x != third && x != second && x != first) {
            fourth = x;
        }
    }

    printf("Largest      = %d\n", first);
    printf("2nd Largest  = %d\n", second);
    printf("3rd Largest  = %d\n", third);
    printf("4th Largest  = %d\n", fourth);

    return 0;
}