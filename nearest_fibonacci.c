#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,k,x,y,a=0,b=1,c;
    scanf("%d",&n);
    while(a<=n)
    {
        i=a;
        c=a+b;
        a=b;
        b=c;
        k=a;
    }
    x=abs(k-n);
    y=abs(i-n);
    if(x>y)
    printf("%d",i);
    else if(x==y)
    printf("%d %d",i,k);
    else
    printf("%d",k);
}