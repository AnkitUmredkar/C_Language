//1. wap to print reversed multplication table of given number.

#include<stdio.h>

int main()
{
	int n,x;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(x=10; x>=1; x--)
	{
		printf("%d * %d = %d\n",n,x,n*x);
	}
	
	return 0;	
} 