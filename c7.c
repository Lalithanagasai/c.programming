#include<stdio.h>
#include<conio.h>
void main()
{
int i,space,k=0,r,c;
printf("enter the no of rows");
scanf("%d",&r);
space=r-1;
for(k=1;k<=r;k++)
{
    for(c=1;c<=space;c++)

        printf(" ");
        space--;
        for(c=1;c<=2*k-1;c++)
            printf("*");
            printf("\n");
}
space=1;
for(k=1;k<=r-1;k++)
{
    for(c=1;c<=space;c++)
        printf(" ");
    space++;
    for(c=1;c<=2*(r-k)-1;c++)
        printf("*");
    printf("\n");
}
}
