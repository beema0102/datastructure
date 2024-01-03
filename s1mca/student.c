#include<stdio.h>
void calculate(int s1,int s2,int s3,int s4);
int main()
{
int s1,s2,s3,s4;
printf("enter marks of 4 subjects");
scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
calculate(s1,s2,s3,s4);
return 0;
}
void calculate(int s1,int s2,int s3,int s4){
int total=s1+s2+s3+s4;
float average=total/4.0;
printf("sum:%d",total);
printf("\naverage:%f",average);
}

