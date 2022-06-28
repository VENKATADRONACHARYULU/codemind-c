#include<stdio.h>
int main()
{
    int a[100],n,i,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        while(a[i]%min!=0)
        {
            min=a[i];
            i++;
        }
    }
    printf("%d",min);
}