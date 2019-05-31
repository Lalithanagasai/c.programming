#include<stdio.h>
#include<conio.h>
int main()
{
int arr[100],i,j,size,count=0;
printf("enter the length size");
scanf("%d",&size);
printf("enter the %d array elements:",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]==arr[j])
{
count++;
break;
}
}
}
printf("the total number of duplicate elements in the array are=%d",count);
return 0;

}
