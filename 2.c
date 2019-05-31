#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
for(i=5;i>=0;i--)
{
for(j=5;j>i;j--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
    printf("*");
}
printf("\n");
}
}
