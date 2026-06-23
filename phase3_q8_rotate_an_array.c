#include <stdio.h>

int main()
{
    int a[100], n, i, r, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &r);

    for(i = 0; i < r; i++)
    {
        temp = a[0];

        for(int j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }

        a[n - 1] = temp;
    }

    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}