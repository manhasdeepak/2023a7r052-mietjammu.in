#include<stdio.h>
void main ()
{
    int n;
    printf(" enter the size of the array");
    scanf("%d",&n);
    int a[n],i;
    printf(" enter the elements");
    for (i=0;i<n;i++)
  scanf(" %d",&a[i]);
  int j;
  for (i=0;i<n;i++)
{int k=0;
for( j=k+1;j<n-i;j++)
{
    if (a[k]>a[j])
{int t=a[j];
a[j]=a[k];
a[k]=t;} 
k++;
}
}
printf("the sorted array");
for (i=0;i<n;i++)
printf(" %d\n",a[i]);
}

