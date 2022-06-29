#include<stdio.h>
int main()
{
    int i,n,arr[100],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
    return 0;
}