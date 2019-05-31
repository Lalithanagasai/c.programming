#include<stdio.h>
#include<conio.h>
union unionjob
{
char a[25];
int age;
float sal;
}ujob;
struct student
{
char a[50];
int  age;
float sal;
}stu;
int main()
{
printf("enter the size of union=%d bytes",sizeof(ujob));
printf("enter the size of structure=%d bytes",sizeof(stu));
return 0;
}
