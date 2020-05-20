#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,*arr,temp;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0,j=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j++]=temp;
        }
    }
    printf("[");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("]");
    return 0;
}
