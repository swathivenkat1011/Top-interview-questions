#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,*a,n,target,flag=0;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the target\t");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==target)
            {
                printf("[%d,%d]",i,j);
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }

}
