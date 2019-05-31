#include<stdio.h>
#include"conio.h"
#include<stdlib.h>
void main()
{
int a;
short b;
long c;
unsigned int d;
unsigned short e;
unsigned long f;
char g;
unsigned char h;
float i;
double j;
printf(" int short long unsigned int unsigned short unsigned long\n");
scanf("%d %hi %ld %u %u %lu",&a,&b,&c,&d,&e,&f);
printf("int=%d\tshort=%hi\tlong=%ld\tunsigned valuesint=%ushort=%hulong=%lu\t",a,b,c,d,e,f);
fflush(stdin);
printf(" char unsignedchar\n");
scanf("%c %c",&g,&h);
printf("char=%c\tunsignedchar=%c\n",g,h);
fflush(stdin);
printf("float/t double\n");
scanf("%f%lf",&i,&j);
printf("float=%.2fdouble=%.3lf",i,j);
fflush(stdin);
getch();
}






