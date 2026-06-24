#include <stdio.h>

int main() {
    int a[5], b[5], i;
    int *p1 = a, *p2 = b;
    int temp;

    printf("Enter 5 elements of first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", p1 + i);
    }

    printf("Enter 5 elements of second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", p2 + i);
    }

    // swapping elements
    for(i = 0; i < 5; i++) {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    printf("After swapping:\n");

    printf("First array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", *(p1 + i));
    }

    printf("\nSecond array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", *(p2 + i));
    }

    return 0;
}