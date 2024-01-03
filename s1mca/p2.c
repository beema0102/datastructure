#include<stdio.h>
void swap(int,int);
void main(){
int i,j;
printf("enter i and j value:");
scanf("%d%d",&i,&j);
printf("before swapping:%d %d\n",i,j);
swap(i,j);
}

void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("after swapping%d %d\n",a,b);
}

