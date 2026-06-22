//Write a C program to input $N$ elements into a one-dimensional array. Accept a target value from the user and search for it in the array. If the element is found, print its index (0-based); otherwise, display a message stating that the element is not present.
#include <stdio.h>

int main()
{
    int arr[100], n, target, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element is not present in the array.\n");
    }

    return 0;
}