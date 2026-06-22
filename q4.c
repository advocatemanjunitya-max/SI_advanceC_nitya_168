//find missing number in array
#include <stdio.h>
int main()
 {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n - 1];
    int sum = 0;
    printf("Enter %d elements: ", n - 1);
    for(i = 0; i < n - 1; i++)
     {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total = n * (n + 1) / 2;
    int missing = total - sum;
    printf("Missing number is: %d\n", missing);
    return 0;
} 