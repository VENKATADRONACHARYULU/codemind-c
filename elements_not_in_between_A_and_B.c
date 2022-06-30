#include<stdio.h>
int main()
{
    int i,j,arr[100],n,a,b,f=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        k=0;
        if(arr[i]>=a && arr[i]<=b)
        {
            k=1;
        }
        if(k==0)
        {
            f=1;
            printf("%d ",arr[i]);
        }

    }
    if(f==0)
    {
        printf("-1");
    }
    return 0;
}