#include<stdio.h>
void main()
{
 int n=100,i,j,fact;
 for(int i=0;i<=n;i++)
 {
    fact=0;
    for(j=1;j<=n;j++)
    {
        fact++;
        }
   if(fact==2)
     printf("%d",i);
     }
 }
