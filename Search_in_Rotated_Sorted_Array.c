#include<stdio.h>
int main()
{
    int i,n,arr[100],k,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            f=1;
            printf("%d",i);
        }
    }
    if(f==0)
    {
        printf("-1");
    }
}