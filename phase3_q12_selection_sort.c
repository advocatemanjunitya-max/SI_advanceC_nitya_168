//selection sort
#include<stdio.h>

int main()
{
    int arr[10], sel, i, j, swap;

    printf("Enter 10 unsorted data elements:\n");

    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < 9; i++)
    {
        sel = i;

        for(j = i + 1; j < 10; j++)
        {
            if(arr[j] < arr[sel])
                sel = j;
        }

        swap = arr[i];
        arr[i] = arr[sel];
        arr[sel] = swap;
    }

    printf("\nSorted data is:\n");

    for(i = 0; i < 10; i++)
        printf("%d\n", arr[i]);

    return 0;
}