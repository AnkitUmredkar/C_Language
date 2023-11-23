//4. WAP to find the sum of n numbers using the goto statement.

#include<stdio.h>

int main()
{
	int n,x=1,sum=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	start:
	
	sum = sum + x;
	x++;
	
	if(x<=n)
	{
		goto start;
	}
	
	printf("The sum of the 1 to %d is : %d",n,sum);
	
	return 0;
}