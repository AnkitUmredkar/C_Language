//find the sum of first and last digit in entered number like (1234)
//output is 1+4 = 10

#include<stdio.h>

int main()
{
	int n,fd,ld,x=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	ld = n % 10;
	
	while(n>9)
	{
		n = n / 10;
	}
	
	fd = n;
	
	printf("%d + %d = %d",fd,ld,fd+ld);
	
	return 0;
}