#include<stdio.h>
#include<stdlib.h>
int p,x;
void insert(int *a,int n)
{
     int item,pos,i;
     if(n<10)
     {
     printf(" enter the element to insert:\n");
     scanf("%d", &item);
     printf("Enter the position to insert: ");
     scanf("%d",&pos);
     for(i=n-1;i>=pos;i--)
     a[i+1]=a[i];
     a[pos]=item;
     n=n+1;
     for(i=0;i<n;i++)
printf("%d\n",a[i]);
     }
     else
     printf("Not possible to insert, OVERFLOW\n");
     
}
void del(int *a,int n)
{
     int pos,item,i;
     printf("Enter the position to delete: ");
     scanf("%d",&pos);
     item=a[pos];
     for(i=pos;i<n-1;i++)
     a[i]=a[i+1];
     n=n-1;
     for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
void traversal(int *a,int n)
{
printf("Array:");
for(int i=0;i<n;i++)
printf("\n%d ",a[i]);
}
void main()
{
int i,a[10],n,ch=1;
char r;
printf("Enter the size of the array : ");
scanf("%d", &n);
printf("Enter the array : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
do
{
int ch;

printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice : ");
scanf("%d",&ch);
switch(ch){
case 1: insert(a,n);
       break;
case 2: del(a,n);
       break;
case 3: traversal(a,n);
break;
case 4:
ch=0;
printf("Thank you!");

exit(0);
default:
printf("Invalid choice!!!");
break;
}
//printf("Do you want to continue\n");
//scanf("%c",&r);

}while(ch==1);
}


