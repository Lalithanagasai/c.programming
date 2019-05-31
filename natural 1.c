#include<stdio.h>
#include<conio.h>
int main()
{
  int n,sum=0;
  int avg;
  printf("enter the value of n \n");
  scanf("%d",&n);
   sum=(n*(n+1))/2;
  	avg=sum/n;
   printf("the avg of given number is :%d",n,sum);
  return 0;
  }
