#include<stdio.h>
int sumarr(int arr[],int n)
{
  int add=0;
  for (int j=0;j<n;j++)
  {
    add=add+arr[j];
  }
  printf("sum of the array=%d\n",add);
}
void main()
{
  int len;
  printf("Enter length of array: ");
  scanf("%d",&len);
  int arr[len];
  for(int i=0;i<len;i++){
  	printf("Enter %d number: ",i+1);
  	scanf("%d",&arr[i]);
  }
  sumarr(arr,len);
  
}
  
  
