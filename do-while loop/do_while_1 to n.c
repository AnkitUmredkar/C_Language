//3. WAP to print 1 to N using do while Loop.

#include<stdio.h>

int main()
{
	int n,x=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",x);
		x++;	
	}while(x<=n);
	
	return 0;
}