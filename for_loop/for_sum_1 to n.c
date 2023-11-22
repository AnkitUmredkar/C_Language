//8. WAP to print sum 1 to N using for loop.

#include<stdio.h>

int main()
{
	int x,n,sum=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1; x<=n; x++)
	{
		sum = sum + x;
	}
	
	printf("\nThe sum of 1 to %d is : %d",n,sum);
	
	return 0;
}