//1. wap to find if a given no. is neautral or not using nested if-else.

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("\n The entered number is positive.");
	}
	else
	{
		if(n == 0)
		{
			printf("\n The entered number is neautral.");
		}
		else
		{
			printf("\n The entered number is negitive.");
		}
	}
	
	return 0;
}