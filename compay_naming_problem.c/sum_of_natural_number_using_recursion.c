#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}
int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sum(num);

    printf("Sum of first %d natural numbers = %d", num, result);

    return 0;
}