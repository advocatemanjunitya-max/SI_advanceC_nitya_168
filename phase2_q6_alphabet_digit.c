#include <stdio.h>
int main()
{
    char c;
   printf("Enter a character: ");
    scanf("%c", &c);

    if ((c>='A'&&c<='Z') ||(c>='a'&&c<='z'))
        printf("Alphabet");
    else if (c>='0'&&c<='9')
        printf("Digit");
    else
        printf("Special Character");
  return 0;
}