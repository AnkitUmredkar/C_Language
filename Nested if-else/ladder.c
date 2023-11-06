// WAP to Find if a given no. is neutral or not using ladder if else.

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("You entered positive number");
	}
	else if(n<0)
	{
		printf("You entered negative number");
	}
	else
	{
		printf("You entered neautral number");
	}
}