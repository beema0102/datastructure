#include<stdio.h>
void b_sort(int *a,int n)
{
   int i,temp,j;
   for(i=0;i<n-1;i++)
   {
      for(j=0;j<n-i-1;j++)
      {
         if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }
   for(i=0;i<n;i++)
     printf("%d\t",a[i]);
}
void main()
{
   int a[10],n,ans,i,j,temp;

   printf("Enter the number of elements :");
   scanf("%d",&n);
   printf("Enter the elements :");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<n-1;i++)
   {
      for(j=0;j<n-i-1;j++)
      {
         if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }
   b_sort(a,n);

}
