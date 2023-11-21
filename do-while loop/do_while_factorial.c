//9. WAP to calculate the factorial of N. using do while loop.

#include<stdio.h>

int main()
{
	int n,x=1,fact=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	do
	{
		fact = fact * x;
		x++;
	}while(x<=n);
	
	printf("\nThe factorial of %d is : %d",n,fact);

	
	return 0;
}
