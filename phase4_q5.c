#include <stdio.h>

int main()
{
    char a[50], b[50];
    int i = 0, j;

    printf("Enter string: ");
    scanf("%s", a);

    while(a[i] != '\0')
    {
        i++;
    }

    for(j = 0; i > 0; j++)
    {
        i--;
        b[j] = a[i];
    }

    b[j] = '\0';

    printf("%s", b);

    return 0;
}