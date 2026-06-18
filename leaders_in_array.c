#include <stdio.h>
int main()
 {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }
    printf("Leaders in the array are: ");
    int maxRight = arr[n - 1];
    printf("%d ", maxRight);   // Rightmost element is always a leader
    for(i = n - 2; i >= 0; i--)
     {
        if(arr[i] >= maxRight)
         {
            maxRight = arr[i];
            printf("%d ", arr[i]);
        }
    }
    return 0;
}