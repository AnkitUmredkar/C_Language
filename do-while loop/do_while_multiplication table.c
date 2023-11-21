//10. WAP to print thr multiplication table of N using while loop.

#include<stdio.h>

int main()
{
	int n,x=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	do
	{
		printf("%d * %d = %d\n",n,x,n*x);
		x++;
	}while(x<=10);
	
	return 0;
}