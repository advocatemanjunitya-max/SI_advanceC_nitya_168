#include <stdio.h>

int main()
{
    int a[100], n, x;
    int i, first, last, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to find: ");
    scanf("%d", &x);

    for(i=0; i<n; i++)
    {
        if(a[i] == x)
        {
            if(found == 0)
            {
                first = i;
                found = 1;
            }

            last = i;
        }
    }

    if(found == 1)
    {
        printf("First position = %d\n", first);
        printf("Last position = %d\n", last);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}