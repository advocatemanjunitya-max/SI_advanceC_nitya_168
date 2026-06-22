#include <stdio.h>

int main()
{
    char c;

    scanf("%c", &c);

    if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ||
        c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("Vowel is %c", c);
    }
    else
    {
        printf("Consonant is %c", c);
    }

    return 0;
}