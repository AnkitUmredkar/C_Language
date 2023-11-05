//WAP to find the sum of the first and last digits of the user's given
//number.

#include<stdio.h>

int main()
{
	int n,count = 1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(n>9)
	{
		n = n/10;
		count++;
	}
	
	printf("%d",count);
	
	return 0;
}