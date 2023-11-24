//5. Write C program to calculate factorial of a number.

#include<stdio.h>

int main()
{
	int n,x,fact=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1; x<=n; x++)
	{
		fact = fact * x;
	}
	
	printf("The factorial of number is : %d",fact);
	
	return 0;
}