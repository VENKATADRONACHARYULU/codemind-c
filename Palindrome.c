#include<stdio.h>
int main()
{
    int n,r,x,sum=0;
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=x;
    if(n==sum)
       printf("True");
    else
    printf("False");
}