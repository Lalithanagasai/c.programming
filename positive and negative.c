#include<stdio.h>
#include<conio.h>
int main()
{
int n,ps=0,ns=0,num,i;
printf("enter no of elements");
scanf("%d",&n);
printf("enter %d elements:",n);
for(i=1;i<=n;i++)
{
scanf("%d",&num);
if(num>0)
ps=ps+num;
ns=ns+num;
}
printf("the positive and negative numbers are =%d",ps,ns);
return 0;
}
