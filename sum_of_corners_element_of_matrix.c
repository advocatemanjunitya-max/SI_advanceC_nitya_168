#include <stdio.h>
int main() {
    int a[10][10], n, i, j;
    int cornerSum;
   printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
   printf("Enter matrix elements:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
         cornerSum = a[0][0] + a[0][n-1] +
                a[n-1][0] + a[n-1][n-1];
    printf("Sum of corner elements = %d\n", cornerSum);
      return 0;
}