#include <stdio.h>

int main()
{
    int arr[100], n;
    int low = 0, mid = 0, high;
    int temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements (only 0, 1, 2): ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    high = n - 1;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else if(arr[mid] == 2)
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
        }
        else
        {
            printf("Invalid element found!");
            return 0;
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}