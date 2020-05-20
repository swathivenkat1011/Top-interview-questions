#include<stdio.h>
int main()
{
    int m,n,i,j,a[20]={0},b[20]={0};
    printf("Enter the size of 1st array\t");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        a[j]++;
    }
    printf("Enter the size of 2nd array\t");
    scanf("%d",&m);
    printf("Enter the elements\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&j);
        b[j]++;
    }
    printf("[");
    for(i=0;i<20;i++)
    {
        if(a[i]>=b[i])
        {
            for(j=0;j<b[i];j++)
            {
                printf("%d ",i);
            }
        }
        else
        {
            for(j=0;j<a[i];j++)
            {
                printf("%d ",i);
            }
        }
    }
    printf("]");
    return 0;
}
