//4. WAP to print n to 1 using do while Loop.

#include<stdio.h>

int main()
{
	int n,x;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);

	x=n;

	do
	{
		printf("%d ",x);
		x--;	
	}while(1<=x);
	
	return 0;
}