//7. wap to print day of week without using switch case

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the number of day : ");
	scanf("%d",&n);
	
	if(n==1)
	{
		printf("Sunday");
	}
	else if(n==2)
	{
		printf("Monday");
	}
	else if(n==3)
	{
		printf("Tuesday");
	}
	else if(n==4)
	{
		printf("Wednesday");
	}
	else if(n==5)
	{
		printf("Thursday");
	}
	else if(n==6)
	{
		printf("Friday");
	}
	else if(n==7)
	{
		printf("saturday");
	}
	
	
	
	return 0;
}