#include <stdio.h>
int main()
 {
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &m, &n);
    int matrix[m][n], transpose[n][m];
    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Find transpose
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++)
         {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < m; i++)
     {
        for(j = 0; j < n; j++)
         {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < m; j++)
         {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}