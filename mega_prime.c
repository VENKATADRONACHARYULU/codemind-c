#include<stdio.h>
int main()
{
    int i,n,c=0,d,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        while(n!=0)
        {
            f=0;
            d=n%10;
            if(d==2 || d==3 || d==5 || d==7)
            {
                f=1;
            }
            n=n/10;
        }
    }
    if(c==2 && f==1)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}