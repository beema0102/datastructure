#include<stdio.h>
int add( int a,int b)
{
  int add1;
  add1=a+b;
}
 int sub( int a,int b)
{
  int sub1;
  sub1=a-b;
}
  int mul( int a,int b)
{
  int mul1;
  mul1=a*b;
}
 int div( int a,int b)
{
  int div1;
  div1=a/b;
}
int main()
 {
  int choice,a,b;
  do
  {
   printf("\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exit\n");
    printf("enter your choice:");
   scanf("%d",&choice);
  
  
  switch(choice)
  {
  case 1:
       printf("enter the first numbers:");
       scanf("%d",&a);
       printf("enter the second numbers:");
       scanf("%d",&b);
       printf("addition=%d",add(a,b));
       break;
  case 2:
       printf("enter the first numbers:");
       scanf("%d",&a);
       printf("enter the second numbers:");
       scanf("%d",&b);
       printf("subtraction=%d:",sub(a,b));
       break;
  case 3:
      printf("enter the first numbers:");
      scanf("%d",&a);
      printf("enter the second numbers:");
      scanf("%d",&b);
      printf("multiplication:%d",mul(a,b));
      break;
  case 4:
       printf("enter the first numbers:");
       scanf("%d",&a);
       printf("enter the second numbers:");
       scanf("%d",&b);
       printf("division:%d",div(a,b));
       break;
  case 5:
       break;       
  default:
        printf("invalid choice");
        
  }
   }    
  while(choice!=5);
  return 0;
 }
  
