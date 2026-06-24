#include <stdio.h>

int main()
{
    int a, b, *p, *q, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swapping:\n");
    printf("%d %d", a, b);

    return 0;
}
