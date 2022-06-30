#include<stdio.h>
int main()
{
	int ar[20],n,f=0,i,se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	scanf("%d",&se);
	for(i=0;i<n;i++)
	{
		if(ar[i]==se)
		{
			f++;
		}
		
	}
	printf("%d",f);
}