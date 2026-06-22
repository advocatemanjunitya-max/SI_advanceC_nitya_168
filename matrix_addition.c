include <stdio.h>
int main()
 {
    int m, n, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &m, &n);
    int A[m][n], B[m][n], sum[m][n], diff[m][n];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < m; i++)
     {
        for(j = 0; j < n; j++)
         {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++)
         {
            scanf("%d", &B[i][j]);
        }
    }
    // Addition and Subtraction
    for(i = 0; i < m; i++)
     {
        for(j = 0; j < n; j++) 
        {
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("\nMatrix Addition:\n");
    for(i = 0; i < m; i++)
     {
        for(j = 0; j < n; j++)
         {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix Subtraction:\n");
    for(i = 0; i < m; i++)
     {
        for(j = 0; j < n; j++)
         {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}