int pal(int n)
{
    int s=0,temp,d;
    temp=n;
    while(n!=0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    if(s==temp)
    return 1;
    else
    return 0;
}
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
#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,k;
    scanf("%d",&n);
    a=n+1;
    while(1)
    {
        if(prime(a) && pal(a))
        {
            k=a;
            break;
        }
        a=a+1;
    }
    printf("%d",k);
    
}