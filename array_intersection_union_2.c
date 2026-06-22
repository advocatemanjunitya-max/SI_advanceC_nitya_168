#include<stdio.h>
int main()
{ 
int arr1[]={1,34,54,2,4,6,7};
    int arr2[]={2,4,54,67,76,3};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int sizeI;
    if ( sizeI<size2)
    {
        sizeI=size1;
    }
    else
    {
        sizeI=size2;
    }
    for(int i=0;i<sizeI;i++)
    {
        for (int j=0;j<size2;j++)
        {
            if (arr1[i]==arr2[j])
            {
                printf("%d ",arr1[i]);
            }
        }
    }
    return 0;
}