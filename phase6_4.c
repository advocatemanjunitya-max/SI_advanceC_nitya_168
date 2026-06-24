#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[5];

    int *p1 = a;  
    int *p2 = b;   

    for(int i = 0; i < 5; i++)
    {
        *p2 = *p1;  
        p1++;
        p2++;
    }

    printf("Copied array: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}