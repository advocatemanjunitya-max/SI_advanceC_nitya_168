#include<stdio.h>
int main()
{
    int a[] = {3, 4, 5, 6, 12, 15};
    int ele = 15;

    int first = 0;
    int last = sizeof(a) / sizeof(a[0]) - 1;
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (ele == a[mid])
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (ele > a[mid])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    printf("Element not found\n");
    return 0;
}