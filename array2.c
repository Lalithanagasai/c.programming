#include<stdio.h>
#include<string.h>
void main()
{
	char s1[]="THANUJA";
	char s2[]="srikar";
	int s;
	printf("enter the choices between 1 to 6");
	scanf("%d",&s);
	switch(s)
	{
		case 1:printf("%d",strlen(s1));
		       break;
	    case 2:printf("%s",strupr(s2));
	           break;
	    case 3:printf("%s",strlwr(s1));
	           break;
	    case 4:printf("%s",strcpy(s1,s2));
		       break; 
	    case 5:printf("%s",strcat(s2,s1));
		       break;
	    case 6:printf("%s",strcmp(s1,s2));
		       break;     
	}
}
	
