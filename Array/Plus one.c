#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,*b,i,n,flag=0;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {

        if(a[i]>=9)
        {
            a[i]=0;
        }
        else
            {
            a[i]+=1;
            break;
        }
        if(i==0)
        {
            if(a[i]==0)
                flag=1;
        }
    }
    if(flag!=1)
    {
    printf("[");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("]");
    }
    if(flag==1)
    {
        b=(int *)malloc(sizeof(int)*(n+1));
        b[0]=1;
        printf("[%d ",b[0]);
        for(i=0;i<n;i++)
        {
            b[i]=0;
            printf("%d ",b[i]);
        }
        printf("]");
    }
        return 0;



}
