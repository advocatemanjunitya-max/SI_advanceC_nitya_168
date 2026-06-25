#include <stdio.h>

int main()
{
    char a[100];
    int i, v = 0, c = 0, d = 0, s = 0;

    printf("Enter string: ");
    gets(a);

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
           a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            v++;
        else if(a[i]>='0' && a[i]<='9')
            d++;
        else if(a[i]==' ')
            s++;
        else
            c++;
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);
    printf("Digits = %d\n", d);
    printf("Spaces = %d", s);

    return 0;
}