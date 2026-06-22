#include <stdio.h>

int main() {
       char c;
       int sum; int sub; int product; int a; int b;int divide; int remainder;
       // printf("enter the number");
        scanf("%d%d", &a,&b);
         scanf("%c",&c);
         //printf(" sum is 90") ;
switch(c)
{
    case '+' : sum=a+b;
    printf("%d",sum);
     break;
    case '-': sub=a-b;
    printf("%d",sub);
    
    case '*': product=a*b;
    printf("%d",product);
    
    case '/': divide=a/b;
    printf("%d",divide);
    
    case '%': remainder=a%b;
    printf("%d", remainder) ;
} 
return 0;
}