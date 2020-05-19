#include<stdio.h>
#include<stdlib.h>
int  main()
{
    int n,i,val=0;
    int *arr;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        val=val^arr[i];
    }
    printf("The unique element is %d",val);
    return 0;
}
