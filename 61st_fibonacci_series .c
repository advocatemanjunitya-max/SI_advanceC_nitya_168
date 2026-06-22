#include<stdio.h>

int main()
{
    int num1=0, num2=1, num3,i;
    for (i=2; i<61; i++)
    {
        num3=num1+num2;
        num1=num2;
        num2=num3;

        if(i==60)
        printf("%d",num3);
    }
    return 0;
    }
