#include<stdio.h>

int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n+sum(n-1);
}

int main()
{
	int n;
	
	printf("Enter the value which you find factorial : ");
	scanf("%d",&n);
	
	printf("\nThe sum is : %d",sum(n));
}