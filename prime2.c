#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,c,j;
	printf("enter the range");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	 c=0;
	 for(j=1;j<=n;j++)
	 {
	 	if(i%j==0)
	 	c++;
	 }
	 if(c==2)
	 printf("%d",i);
}
getch();
}
