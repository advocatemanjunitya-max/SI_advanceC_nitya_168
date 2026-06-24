#include <stdio.h>

int main() {
    int arr[5], i, key;
    int *p = arr;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(*(p + i) == key) {
            printf("Element found at position %d", i + 1);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}