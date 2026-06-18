//write a program to check whether the sum of all the diagonals of a matrix is equal to the sum of its boundary element

#include <stdio.h>
int main() {
    int a[10][10], n;
    int i, j;
    int diagSum=0,boundarySum=0;
     printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
       for(i = 0; i < n; i++) {
        diagSum+= a[i][i];          
        diagSum+= a[i][n-1-i];  
    }
        if(n%2!=0) {
        diagSum-=a[n/2][n/2];
    }
        for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1) {
                boundarySum += a[i][j];
            }
        }
    }
    printf("Sum of diagonals = %d\n", diagSum);
    printf("Sum of boundary elements = %d\n", boundarySum);
    if(diagSum == boundarySum)
        printf("Both sums are equal.\n");
    else
        printf("Both sums are not equal.\n");

    return 0;
}