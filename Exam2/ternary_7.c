//8. wap to check number is divisible by 7 or not using ternary 

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	(n % 7 == 0)? printf("The entered number is divisible by 7"): printf("The entered number is not divisible by 7"); 
	
	return 0;
}