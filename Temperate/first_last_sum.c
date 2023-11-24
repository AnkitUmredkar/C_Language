//4. Write C program to find sum of first and last digit of a number.

#include<stdio.h>

int main()
{
	int n,fd,ld;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	ld = n % 10;
	
	while(n>9)
	{
		n = n / 10;
	}
	
	fd = n;
	
	printf("The sum of %d + %d = %d",fd,ld,fd+ld);
	
	return 0;
}