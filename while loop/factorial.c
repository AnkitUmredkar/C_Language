//9. WAP to calculate the factorial of N. using while loop.

#include<stdio.h>

int main()
{
	int n,fact=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	int x=n;
	while(x>=1)
	{
		fact = fact * x;
		x--;
	}
	
	printf("The factorial of number is : %d",fact);
	
	return 0;
}
