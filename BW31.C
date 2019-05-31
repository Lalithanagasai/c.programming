#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int a,b,c;
printf("enter the values of a,b");
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=b^a;
printf("after swapping a=%d b=%d",a,b);
getch();
}