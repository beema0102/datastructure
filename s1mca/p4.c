#include <stdio.h>
int volume(int h,int w,int d)
{
return(h*w*d);
}
int main()
{
int h,w,d,v;
printf("enter height,width,depth");
scanf("%d%d%d",&h,&w,&d);
v=volume(h,w,d);
printf("volume:%d",v);
return 0;
}
