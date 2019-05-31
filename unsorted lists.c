#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],i,n,pos,x;
 printf("enter how many value in the array");
 scanf("%d",&n);
 printf("enter %d value\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("which value we want to insert");
 scanf("%d",&pos);
 for(i=n;i>=pos;i--)
 a[i]=a[i-1];
 a[pos]=x;
 printf("your lists is :\n");
 for(i=0;i<n;i++)
 printf("%5d",a[i]);
 printf("after inserting the lists is :\n");
 for(i=0;i<=n;i++)
 printf("%5d",a[i]);
 getch();
 }


















