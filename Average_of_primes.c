#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0,s=0,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            c++;
        }
        if(c==2)
        {
            k++;
        s+=arr[i];
        }
    }
    printf("%.2f",(float)s/k);
}