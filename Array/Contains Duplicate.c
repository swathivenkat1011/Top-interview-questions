#include<stdio.h>
int main()
{
    int arr[10]={0},i,n,j,flag=1;
    printf("Enter the number of elements\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        arr[j]++;
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>1)
        {
            printf("False");
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("True");
    return 0;
}
