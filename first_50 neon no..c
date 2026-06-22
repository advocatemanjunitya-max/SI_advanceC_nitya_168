#include<stdio.h>
int main()
{
    int sq, temp,sum=0, countN=0,rem,i;
    for(i=0; ;i++)
    {
        sq=i*i;
        temp=sq;
        sum=0;

        while(temp>0)
        {
            rem=temp%10;
            sum=sum+rem;
            temp=temp/10;
        }
        if (sum==i)
        {
            countN++;
        }
        if(countN==15)
        {
               
               printf("%d\n", i);
               break;
    }
}
    return 0;
}

    