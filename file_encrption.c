#include <stdio.h>
int main()
{
    FILE *f1, *f2;
    char ch;
    char key = 5;
    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");
    if(f1 == NULL)
    {
        printf("File not found");
        return 0;
    }
    while((ch = fgetc(f1)) != EOF)
    {
        ch = ch ^ key;
        fputc(ch, f2);
    }
    printf("File Encrypted Successfully");
    fclose(f1);
    fclose(f2);
    return 0;
}