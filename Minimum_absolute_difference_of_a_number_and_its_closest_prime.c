#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    return 1;
    else
    return 0;
}
int main()
{
    int i,k,n,g,l;
    scanf("%d",&n);
    if(prime(n))
    {
        printf("0");
    }
    else
    {
    for(i=1;i<n;i++)
    {
        if(prime(i))
        k=i;
    }
    g=n+1;
    while(1)
    {
        if(prime(g))
        {
            l=g;
            break;
        }
        g=g+1;
    }
    if(abs(k-n)>abs(g-n))
    {
        printf("%d",abs(g-n));
    }
    else
    {
        printf("%d",abs(k-n));
    }
    }
}