//recursion sum.

#include<stdio.h>

int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}

int main()
{
	int n,x;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	x= fact(n);
	
	printf("%d",x);
	
	return 0;
}