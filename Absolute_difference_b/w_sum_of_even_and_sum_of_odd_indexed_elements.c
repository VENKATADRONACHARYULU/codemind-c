#include<stdio.h>
int main()
{
    int i,n,arr[100],s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+arr[i];
        }
    }
     for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            s2=s2+arr[i];
        }
    }
    printf("%d",s1-s2);
    return 0;
}