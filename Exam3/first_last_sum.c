//6. wap to find sum of first and last digit of number.

#include<stdio.h>

int main()
{
	int n,fd,ld;
	
	printf("Enter teh value of n : ");
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