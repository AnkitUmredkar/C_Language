//9. WAP to calculate the factorial of N. using for Loop.

#include<stdio.h>

int main()
{
	int x,n,fact=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1; x<=n; x++)
	{
		fact = fact * x;
	}
	
	printf("\nThe factorial of %d is : %d",n,fact);
	
	return 0;
}