#include<stdio.h>
#include<conio.h>
int main()
{
int i,size,a[20],b[20];
printf("enter the array size");
scanf("%d",&size);
printf("enter the array elements");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
b[i]=a[i];
}
printf("the second array elements are:\n");
for(i=0;i<size;i++)
{
printf("\n value inside array b[%d]=%d",i,b[i]);
}
getch();
}
