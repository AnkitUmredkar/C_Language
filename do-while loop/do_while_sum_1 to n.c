//8. WAP to print sum 1 to N using do while loop.

#include<stdio.h>

int main()
{
	int n,x=1,sum=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	do
	{
		sum = sum + x;
		x++;
	}while(x<=n);
	
	printf("\nThe sum of 1 to %d is : %d",n,sum);
	
	return 0;
}
