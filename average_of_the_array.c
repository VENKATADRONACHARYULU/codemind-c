#include<stdio.h>
int main()
{
    int i,arr[100],s=0;
    float n,avg;
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    avg=s/n;
    printf("%.2f",avg);
    return 0;
}