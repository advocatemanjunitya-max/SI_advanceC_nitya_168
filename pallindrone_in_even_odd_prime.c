#include <stdio.h>

int main()
{
    int num, count, temp, rev, rem, isPrime, j;

    /* First 10 palindrome even numbers */
    printf("First 10 palindrome numbers in even series:\n");
    count = 0;
    num = 2;

    while(count < 10)
    {
        temp = num;
        rev = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }

        if(rev == num)
        {
            printf("%d ", num);
            count++;
        }

        num += 2;
    }

    /* First 10 palindrome odd numbers */
    printf("\n\nFirst 10 palindrome numbers in odd series:\n");
    count = 0;
    num = 1;

    while(count < 10)
    {
        temp = num;
        rev = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }

        if(rev == num)
        {
            printf("%d ", num);
            count++;
        }

        num += 2;
    }

    /* First 10 palindrome prime numbers */
    printf("\n\nFirst 10 palindrome numbers in prime series:\n");
    count = 0;
    num = 2;

    while(count < 10)
    {
        isPrime = 1;

        if(num <= 1)
            isPrime = 0;

        for(j = 2; j * j <= num; j++)
        {
            if(num % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            temp = num;
            rev = 0;

            while(temp > 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }

            if(rev == num)
            {
                printf("%d ", num);
                count++;
            }
        }

        num++;
    }

    printf("\n");
    return 0;
}