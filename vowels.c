#include<stdio.h>
#include<conio.h>
int main()
{
char str[100];
char *p;
int v=0,c=0;
printf("enter the string");
gets(str);
p=str;
while(*p!='\0')
{
if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
v++;
else
c++;
p++;
}
printf("number of vowels %d\n",v);
printf("number of consonants %d\n",c);
return 0;
}
