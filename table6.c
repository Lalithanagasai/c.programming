#include<stdio.h>
#include<conio.h>
int main()
{
	int t,l,i,r;
	printf("enter the table");
	scanf("%d",&t);
	printf("enter the limit");
	scanf("%d",&l);
	printf("enter the table");
	for(i=1;i<=l;i++)
	{
		r=i+l;
		printf("%d %d %d",i,l,r);
	}
	getch();
}
