#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int i,j,a,b;
    for(i=0;i<n;i++)
    {  long long int c=0;
        scanf("%lld%lld",&a,&b);
        for(j=0;j<b;j++)
        {
            if((j*j)%b==a)
            {
                printf("%lld
",j);
                c++;
                break;
            }
        }
        if(c==0)
        printf("-1
");
    }
}