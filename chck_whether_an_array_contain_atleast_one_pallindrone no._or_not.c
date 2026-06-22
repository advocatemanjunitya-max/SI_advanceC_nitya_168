#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int arr[] = {12, 34, 121, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Array contains at least one palindrome number.\n");
    else
        printf("Array does not contain any palindrome number.\n");

    return 0;
}