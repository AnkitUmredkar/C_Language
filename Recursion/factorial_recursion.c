#include<stdio.h>

int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}

int main()
{
	int n;
	
	printf("Enter the value which you find factorial : ");
	scanf("%d",&n);
	
	printf("\nThe factorial is : %d",fact(n));
}