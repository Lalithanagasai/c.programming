#include<stdio.h>
#include<conio.h>
void main()
{
int i,c=0,c1=0,c2=0,words,lines;
char a[50];
printf("enter the sentence");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
c++;
else if(a[i]=='\n')
c1++;
else if(a[i]=='\t')
c2++;
}
printf("the no of lines are %d %d %d",c,c1,c2);
getch();
}

