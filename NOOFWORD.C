#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,words=1;
char s[20];
printf("enter the text");
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' '||s[i]=='\t'||s[i]=='\n')
{
words++;
}
}
printf("no of words are %d\n ",words);
getch();
}