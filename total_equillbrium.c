#include <stdio.h>

int main() {
    int arr[100],n,i,j;
    int leftSum,rightSum,count=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
      printf("Enter array elements:\n");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
  for(i=0;i<n;i++) {
        leftSum=0;
        rightSum=0;
     
        for(j=0;j<i;j++) {
            leftSum+=arr[j];
        }
    for(j=i+1;j<n;j++) {
            rightSum+=arr[j];
        }
      if(leftSum==rightSum) {
            count++;
        }
    }
       printf("Total equilibrium indices = %d\n", count);
       return 0;
}