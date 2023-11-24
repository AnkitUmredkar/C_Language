//2. Write C program to print multiplication table of any number.

#include<stdio.h>

int main()
{
	int n,x;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1; x<=10; x++)
	{
		printf("%d x %d = %d\n",n,x,n*x);
	}
	
	return 0;
}