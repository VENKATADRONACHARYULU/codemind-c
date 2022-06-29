#include<stdio.h>
int main()
{
    int i,j,n,d,rev=0,c=0,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
   while(n!=0)
   {
       d=n%10;
       rev=rev*10+d;
       n=n/10;
   }
   for(j=1;j<=rev;j++)
   {
       if(rev%j==0)
       {
           k++;
       }
   }
   if(c==2 && k==2)
   {
       printf("circular prime");
   }
   else if(c==2 && k!=2)
   {
       printf("prime but not a circular prime");
   }
   else
   {
       printf("not prime");
   }
   return 0;
}