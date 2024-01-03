#include<stdio.h>
struct student
{
char name;
int rollno;
float marks[5];
};
int main()
{

struct student student1;
printf("enter the name:");
scanf("%s",&student1.name);
printf("enter the rollno:");
scanf("%d",&student1.rollno);
printf("enter Student Marks");
for(int i=0;i<5;i++)
{ 
   scanf("%f",&student1.marks[i]);
}
for(int i=0;i<5;i++)
{ 
   printf("%f",student1.marks[i]);
}
}
