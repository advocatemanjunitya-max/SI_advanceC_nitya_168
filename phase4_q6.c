#include <stdio.h>

int main()
{
    char a[50];
    int i = 0, j;

    printf("Enter string: ");
    scanf("%s", a);

    while(a[i] != '\0')
    {
        i++;
    }

    j = i - 1;
    i = 0;

    while(i < j)
    {
        if(a[i] != a[j])
        {
            printf("Not Palindrome");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome");

    return 0;
}