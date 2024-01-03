#include<stdio.h>
#include<stdlib.h>
int stack[100],ch,n,top,item,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("\n Enter the size of stack:");
    scanf("%d",&n);
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
               exit(0);
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice");
            }
               
        }
    }
    while(ch!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
       
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in stack \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);

    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}


