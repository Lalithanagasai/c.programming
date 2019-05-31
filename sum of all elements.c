#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[20],sum=0;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements in the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("the total no of elements in the array are %d",sum);
}
