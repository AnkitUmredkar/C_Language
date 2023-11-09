//8. WAP to print sum 1 to N using while loop.

#include<stdio.h>

int main()
{
	int n,x=1,sum=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		sum = sum + x;
		x++;
	}
	
	printf("The sum of 1 to n is : %d",sum);
	
	return 0;
}
