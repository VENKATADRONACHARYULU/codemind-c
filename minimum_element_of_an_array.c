#include<stdio.h>
int main()
{
    int ar[100],min=99,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        min=ar[i];
    }
    printf("%d",min);
}