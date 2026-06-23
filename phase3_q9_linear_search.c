#include <stdio.h>

int main()
{
    int a[10], n, i, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("Element found");
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}