#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,te1,te2,count=0,sum=0;
    scanf("%d",&n);
    te1=n;
    te2=n;
    while(n>0)
    {
        m=n%10;
        count++;
        n/=10;
    }
    while(te1>0)
    {
        m=te1%10;
        sum+=pow(m,count);
        te1/=10;
        count--;
    }
    if(sum==te2)
    {
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}