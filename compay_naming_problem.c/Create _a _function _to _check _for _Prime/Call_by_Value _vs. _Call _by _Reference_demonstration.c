#include <stdio.h>

void callByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside Call by Value: a = %d, b = %d\n", a, b);
}

void callByReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside Call by Reference: a = %d, b = %d\n", *a, *b);
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    callByValue(x, y);
    printf("After Call by Value: x = %d, y = %d\n\n", x, y);

    callByReference(&x, &y);
    printf("After Call by Reference: x = %d, y = %d\n", x, y);

    return 0;
}