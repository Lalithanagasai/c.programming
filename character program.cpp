#include<stdio.h>
#include<conio.h>
 int main()
 {
 	char n;
 	printf("enter any character");
 	scanf("%c",&n);
 	if(n>=65&&n<=123)
 	{
	 
	 if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
 	{
 		printf("it is an vowel"); 
 	}
 
	else
	{
		printf("it is an consonant");
	}
 }
if(n>65&&n<91)
{
	printf("it is uppercase");
 } 
 else if(n>96&&n<123)
 {
 	printf("it is lowercase");
 }
 else if(n>47&&n<56)
 {
 	printf("it is number");
 }
	else
	{
		printf("it is number");
	}
	getch();
}

