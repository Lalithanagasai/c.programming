#include<stdio.h>
#include<conio.h>
int main()
{
	int m,d,y=365,m1=30,w=7,t;
	printf("enter no of days");
	scanf("%d",&t);
	printf("enter no of years",t/y);
	printf(" months",t/m1);
	printf("weeks",t/d);
	printf("days",t/w);
	return 0;
	
	
}
