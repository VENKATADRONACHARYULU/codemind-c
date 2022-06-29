#include<stdio.h>
int main()
{
    int n,a,b,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    { sum=0;
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
    }
}