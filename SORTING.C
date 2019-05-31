#include<stdio.h>
#include<conio.h>
void main()
{
int num[50],a,i,j,n;
clrscr();
printf("enter no of elements:\n");
scanf("%d",&n);
printf("enter the elements into array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}
printf("enter the elements to be sorted:\n");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(num[i]>num[j])
{
a=num[i];
num[i]=num[j];
num[j]=a;
}
}
}
printf("the sorted elements are:\n");
for(i=0;i<n;i++)
{
printf("%d\t",num[i]);
}
getch();
}


