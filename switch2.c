#include<stdio.h>
#include<conio.h>
void main()
{
	int n,ch,rem,sum,rem1,uni,uni1,rem2,n2,uni2,uni3,os,es,a,b,diff;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the rule between 2 to 11");
	scanf("%d",&ch);
	switch(ch)
	{
	   	case 1:if(n%2==0)
		       printf("it is divisible by 2");
		       else 
		       printf("it is not divisible by 2");
		       break;
		case 2:while(n>0)
		       {
		       	rem=n%10;
		       	sum=sum+rem;
		       	n=n/10;
			   } 
			   printf("the total sum is %d",sum);
			   if(sum%3==0)
			   printf("it is divisible by 3");
			   else
			   printf("it is not divisible by 3");
			   break;
		case 3:while(n!=0)
		       {
		       	rem1=n%100;
		    	}
		    	printf("the total sum is %d",sum);
				if((rem1%4)==0)
				printf("it is divisible by 4");
				else
				printf("it is not divisible by 4");
				break;
		case 4:uni=n%10;
		       if("uni%5||uni==0")
			   printf("it is divisible by 5");
			   else
			   printf("it is not divisible by 5");
			   break;
		case 5:	while(n>0)
		       {
		       	rem=n%10;
		       	sum=sum+rem;
		       	n=n/10;
			   } 
			   if(sum%2==0||sum%3==0)
			   printf("it is divisibleby 2 and 3");
			   else
			   printf("it is not divisible by 2 and 3");
			   break;
		case 6:uni1=n%7;
		       if(uni1%7==0)
			   printf("it is divisible by 7");
			   else
			   printf("it is not divisible by 3");
			   break;
		case 7:while(n2!=0)
		       {
		       	rem2=n%100;
		    	}
				if(rem2%4==0||n2%2==0)
				printf("it is divisible by 8");
				else
				printf("it is not divisible by 8");
				break;
		case 8: uni2=n%100;
		        if(uni2%3==0||uni2%9==0)
		        printf("it is divisible by 9");
		        else
		        printf("it is not divisible by 9");
		        break;
		case 9:uni3=n%100;
		       if(uni3==0)
			   printf("it is divisible by 10");
			   else
			   printf("it is not divisible by 10");
			   break;
	    case 10:a=n;
		        b=n/10;
				while(a>0)
				{
				os=os+(a%10);
				a=a/100;
			    }
			    while(b>0)
			    {
			    	es=es+(b%10);
			    	b=b/100;
				}
				diff=os-es;
				if(diff%11==0||diff!=0)
				printf("it is divisible by ll");
				else
				printf("it is not divisible by 11");
				break;
		default: printf("something went wrong");				   							     
			   		         
	}
}
