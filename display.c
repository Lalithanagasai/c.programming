#include<stdio.h>
struct student
{
char name[10];
int age;
float sal;
}s;
int main()
{
printf("enter name");
scanf("%s",s.name);
printf("enter age");
scanf("%d",&s.age);
printf("enter salary");
scanf("%f",&s.sal);
printf("display information");
printf("enter name :%s\n");
puts(s.name);
printf("enter age: %d\n",s.age);
printf("enter sal :%f\n",s.sal);
return 0;
}

