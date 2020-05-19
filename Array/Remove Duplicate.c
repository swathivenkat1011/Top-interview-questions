#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *num,n,i,j;
    printf("Enter the size of array");
    scanf("%d",&n);
    num=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    i=0;
    for(j=1;j<n;j++)
    {
        if(num[i]!=num[j])
        {
            i++;
            num[i]=num[j];
        }
    }
    printf("Number of unique elements %d",i+1);
    return 0;
}
