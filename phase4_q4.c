#include <stdio.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
       int i = 0;
  while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            break;
        }
        i++;
    }
      if (str1[i] == str2[i]) {
        printf("Strings are equal\n");
    } else if (str1[i] < str2[i]) {
        printf("String 1 is smaller than String 2\n");
    } else {
        printf("String 1 is greater than String 2\n");
    }
     return 0;
}