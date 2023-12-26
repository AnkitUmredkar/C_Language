//2 Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF.For example,

#include<stdio.h>

void division(int n)
{
	if(n % 3 == 0 && n % 5 == 0)
	{
		printf("\nEntered number is divisible by both 3 and 5");
	}
	else if(n % 5 == 0)
	{
		printf("\nEntered number is divisible by 5");
	}
	else if(n % 3 == 0)
	{
		printf("\nEntered number is divisible by 3");
	}
	else
	{
		printf("\nEntered number is not divisible by both");
	}
}

int main()
{
 	int n; 
 	
 	printf("Enter the value : ");
 	scanf("%d",&n);
 	
 	division(n);
 	
 	return 0;
}
