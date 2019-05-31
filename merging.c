#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str1[20],str2[20],str3[20];
int i=0,j,len1,len2,m,n,r,a,b,p,len3,temp;
a=strlen(str1);
b=strlen(str2);
printf("enter the string1");
gets(str1);
printf("enter the string2");
gets(str2);
printf("enter the string3");
gets(str3);
while(i<a)
{
str3[i]=str1[i];
i++;
}
m=a+b;
n=b+p;
for(i=p;i<n;i++)
{
temp=str3[i];
if(r<b)
{
str1[i]=str2[r];
r=r+1;
}
str1[n]=temp;
n=n+1;
}
printf("%s",str1);
return 0;
}







