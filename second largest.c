#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main()
{
int arr[50],i,size;
int first,second,a;
printf("elements in a array");
scanf("%d",&size);
printf("enter %d elements\n",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
first=second=INT_MIN;
for(i=0;i<size;i++)
{
if(arr[i]>first)
{
second=first;
first=arr[i];
}
else if(arr[i]>second && arr[i]<first)
{
 second=arr[i];
}
}
printf("the second largest element is %d",second);
return 0;
}
