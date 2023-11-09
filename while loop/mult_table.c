//10. WAP to print thr multiplication table of N using while Loop.

#include<stdio.h>

int main()
{
	int n,x=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(x<=10)
	{
		printf("%d * %d = %d\n",n,x,n*x);
		x++;
	}
	
	return 0;
}
