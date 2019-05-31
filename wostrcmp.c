#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char string1[100],string2[100];
	int i,temp=0;
	printf("enter the 1st string");
	gets(string1);
	printf("enter the 2nd string");
	gets(string2);
	for(i=0;string1[i]!=0;i++)
	{
		if(string1[i]==string2[i])
		temp=1;
		else
		temp=0;
	}
	 if(temp==1)
	 printf("both the strings are same");
	 else
	 printf("both the strings are not same");
	 return 0;
	
	}

