#include <stdio.h>

int checkPrime(int n, int i)
{
    if(i == n)
        return 1;

    if(n % i == 0)
        return 0;

    return checkPrime(n, i + 1);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
        printf("Not Prime number");
    else if(checkPrime(num, 2))
        printf("Prime number");
    else
        printf("Not Prime number");

    return 0;
}