#include <stdio.h>

int main()
{
    int arr[100], n;
    int left[100], right[100];
    int water = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter heights: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    left[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > left[i-1])
            left[i] = arr[i];
        else
            left[i] = left[i-1];
    }

    right[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--)
    {
        if(arr[i] > right[i+1])
            right[i] = arr[i];
        else
            right[i] = right[i+1];
    }

    for(int i = 0; i < n; i++)
    {
        if(left[i] < right[i])
            water += left[i] - arr[i];
        else
            water += right[i] - arr[i];
    }

    printf("Trapped water = %d", water);

    return 0;
}