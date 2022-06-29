#include <stdio.h>
void push(int *arr,int n)// 1 0 2 0 2
{
    int i,c=0;
    for (i=0;i<n;i++)
    {
        if (arr[i]!=0)
        {
            arr[c++]=arr[i];
        
		}
		}
    while (c<n)
        arr[c++]=0;
}
int main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
    push(arr,n);
    for (i=0;i<n;i++)
      printf("%d ", arr[i]);
    return 0;
}