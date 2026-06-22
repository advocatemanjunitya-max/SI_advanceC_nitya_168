#include <stdio.h>
#include <math.h>
int main()
{
 int a, b, c;
    float r1, r2, d;
   printf("Enter a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
   d=b*b-4*a*c;
   r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
   printf("Root1 = %.2f\n",r1);
    printf("Root2 = %.2f\n",r2);

    return 0;
}