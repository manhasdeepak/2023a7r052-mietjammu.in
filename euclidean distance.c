#include<stdio.h>
#include<math.h>
void main()
{
int x1,y1,x2,y2;
printf(" enter the coodinates of ist point x1,y1");
scanf(" %d,%d", &x1,&y1);
printf(" enter the coordinates of 2nd point x2,y2");
scanf("%d,%d",&x2,&y2);
double d=sqrt(pow(x2-x1)^2+pow(y2-y1)^2);
printf("the distnace b/w two points in a plane is %1.f",d);
}