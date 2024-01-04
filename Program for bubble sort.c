#include<stdio.h>
void main()
{
    int n;
    printf("enter the size");
    scanf("%d",&n);
    int a[n],i,j;
    printf("enter the array element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int k=0;
        for(j=k;j<n-1;j++)
        {
            if(a[k]>a[j]);
            int t=a[j];
            a[j]=a[k];
            a[k]=t;
        }
    }
    printf("the sorted array");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}