#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a[100],s=0;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==1)
        {
        s=s+pow(2,i);
        }
    }
    printf("%d",s);
    
}