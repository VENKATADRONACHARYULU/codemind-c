#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=sqrt(n);
    if(s*s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}