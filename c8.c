#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,c;
printf("enter no of columns:\n");
scanf("%d",&n);
c=1;
for(i=1;i>n*2;i++)
{
for(j=1;j<=c;j--)
{
printf("*");
}
if(i<n)
{
c++;
}
else
c--;
printf("\n");
}
getch();
}
