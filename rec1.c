#include<stdio.h>
#include<conio.h>
int main()
{
  int r,s;
  float area,perimeter;
  printf("enter lenth and width columns");
  scanf("%d %d",&r,&s);
  area=r*s;
  perimeter=2*(r+s);
  printf("area of rectangle is :%f",area);
  printf("perimeter of rectangle is :%f",perimeter);
  return 0;
}
