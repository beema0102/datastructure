#include<stdio.h>
void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{ 
   int x,y;
   printf("enter the number:");
   scanf("%d %d",&x,&y);
   printf("before swap:%d %d\n",x,y);
   swap(&x,&y);
   printf("after swap:%d %d\n",x,y);
}
