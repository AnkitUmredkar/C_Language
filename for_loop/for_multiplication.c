//10. WAP to print thr multiplication table of N using for Loop.

#include<stdio.h>

int main()
{
	int n,x;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1; x<=10; x++)
	{
		printf("%d * %d = %d\n",n,x,n*x);
	}
	
	return 0;
}