#include<stdio.h>
int main()
{
    int n,l,d,s=0;
    scanf("%d",&n);
    l = n*n;
    while(l)
    {
        d = l % 10;
        s = s + d;
        l = l/10;
    }
    if(s == n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}