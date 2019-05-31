#include<stdio.h>
#include<conio.h>
void main()
{
int num[100],i,j,a,n;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements into array");
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
printf("the smallest and largest elements in the array");
for(i=0;i<n;i++)
{
for(j=1+1;j<n;j++)
{
if(num[i]>num[j])
{
a=num[i];
num[i]=num[j];
num[j]=a;
}
}
}
printf("the smallest and largest in the array are %d %d",num[0],num[n-1]);
getch();
}

