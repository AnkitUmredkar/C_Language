//3. WAP to find the n number factorial without a loop. (using a goto statement).

#include<stdio.h>

int main()
{
	int n,x=1,fact=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	start:
	
	fact = fact * x;
	x++;
	
	if(x<=n)
	{
		goto start;
	}
	
	printf("The factorial of the entered number is : %d",fact);
	
	return 0;
}