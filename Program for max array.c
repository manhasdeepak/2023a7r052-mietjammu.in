#include<stdio.h>
void main()
{
    int n;
    printf("enter the size");
    scanf("%d",&n);
    int a[n],max=0,ind=0,i;
    printf("enter the array element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            ind=i;
        }
    }
    printf("the max element is:%d",max);
    printf("the index of max element:%d",ind);
}