//5. WAP to print odd no. from 1 to N using while Loop.

#include<stdio.h>

int main()
{
	int n,x=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		if(x % 2 == 1)
		{
			printf("%d ",x);
		}
		x++;
	}
	
	return 0;
}
