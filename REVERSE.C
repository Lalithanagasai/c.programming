#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,n;
char a[20];
clrscr();
printf("enter the string");
scanf("%d",&n);
for(i=1;i<n;i++)
{
scanf("%s",&a[i]);
}
fflush(stdin);
printf("the reversed string:");
for(i=n-1;i>0;i--)
{
puts(a);
}
getch();
}





