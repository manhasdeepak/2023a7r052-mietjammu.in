#include <stdio.h>
void main () {
int num;
int fib (int);
printf("enter the number ");
scanf("%d",&num);
 for( int i=0 ;i<num;i++)
  { int ans=fib(i);
printf(" %d\t",ans); }
}
int fib (int n)
{
if (n<=1) 
return n;
else
return (fib (n-1)) +(fib (n-2)) ;
}