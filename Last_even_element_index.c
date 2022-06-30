#include<stdio.h>
int main()
{
    int n,ar[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        if(ar[i]%2==0)
        {
            printf("%d",i);
            break;
        }
    }
}