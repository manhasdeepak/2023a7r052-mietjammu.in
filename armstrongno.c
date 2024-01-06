// armstrong number
/*#include<stdio.h>
#include<math.h>
void main()

{
    int a,i;
   scanf("%d",&a)

  while (i=1)
  printf( " %d",i);
  i+=a*a*a;


}
*/

#include <stdio.h>
#include <math.h>
void main ()
{
    int num ,digit, sum = 0,count = 0; 
    scanf(" %d",&num);

    while (num != 0)
     {
        int digit = num % 10;
        count++;

        num /= 10;
    }
    while(num!=0)
{digit =num %10;
sum +=pow(digit,count);
 num /=10;
}
if (sum==num)
{
    printf(" its an armstrong number\n");
}
else
{
    printf(" it is not an armstrong number");
}
}