#include <stdio.h>

int main() {
    char str[] = "aaabbc";
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        int count = 1;

        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}