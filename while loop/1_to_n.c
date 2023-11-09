//3. WAP to print 1 to N using while Loop.

#include<stdio.h>

int main()
{
	int n,x=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		printf("%d ",x);
		x++;
	}
	
	return 0;
}
