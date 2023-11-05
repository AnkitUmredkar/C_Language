//WAP to find the sum of the first and last digits of the user's given
//number.

#include<stdio.h>

int main()
{
	int n,ld,fd;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	ld = n % 10;
	
	while(n>9)
	{
		n = n/10;
	}
	fd = n;
	
	printf("%d + %d = %d",fd,ld,fd+ld);
	
	return 0;
}