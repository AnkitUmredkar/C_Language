// WAP to print sequences like 4,44,444,4444,... using for loop.
#include<stdio.h>

int main()
{
	int i,j,n=7;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("4");
		}
		printf(",");
	}
	
	return 0;
}