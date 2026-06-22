#include <stdio.h>

int main() {
    int matrix[20][20];

    // Example: initialize the matrix
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            matrix[i][j] = i * 20 + j;
        }
    }

    // Print all elements
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}