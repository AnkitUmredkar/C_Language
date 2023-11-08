//2.Write C program to check a number is even or odd using ternary operator.

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	(n%2==0)? printf("You entered even number"): printf("You entered odd number");
	
	return 0;

}