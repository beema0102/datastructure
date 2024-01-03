#include<stdio.h>
int stak[100],choice,n,top,x,i;
int main()
{
 top=-1;
 printf("enter the size of stack:");
 scanf("%d",&n);
    printf("STACK OPERATIONS\n");
    printf("1.PUSH()\n");
    printf("2.POP()\n");
    printf("2.EXIT\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&choice);
   
    switch(choice)
    {
    case 1:
    	push();
        break;
    case 2:
    	pop();
        break;
    case 3:
    	display();
	break;
    default:
        printf("Invalid input, Please try again!");
}
 
    while(choice!=4)
    return 0;
    }
void push(int stack[100])
{
  if(top>-1)
if(top=size-1)
 {
   printf("stack is full");
   }
else
   {
     top=top+1;
     a[top]=item;
    }
  void pop(int stack[100])
  { 
    if(top<0)
    printf("stack is empty");
    else
    {
      item=a[top];
      top=top-1;
     }
     }
     
        
