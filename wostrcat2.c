#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,length=0,temp;
    char string1[100],string2[100];
    printf("enter the 1st string");
    gets(string1);
    printf("enter the string 2");
    gets(string2);
    for(i=0;string1[i]!='\0';i++)
    length++;
    temp=length;
		for(i=0;string2[i]!='\0';i++)
	{
		string1[temp]=string2[i];
		temp++;
	}
	string1[temp]='\0';
	printf("the concatenate string is %s \n",string1);
	
}
