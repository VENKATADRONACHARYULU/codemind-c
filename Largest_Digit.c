#include<stdio.h>
int main()
{
    int num,l,m,n,o;
    scanf("%d",&num);
    l=num%10;
    num=num/10;
    m=num%10;
    num=num/10;
    n=num%10;
    o=num/10;
    if(o>l && o>m && o>n)
    {
    printf("%d",o);
    }
    else if (n>l && n>m && n>o)
    {
        printf("%d",n);
    }
    else if (m>l && m>n && m>o)
    {
        printf("%d",m);
    }
    else
    {
        printf("%d",l);
    }
    return 0;
}