//. WAP to print sequences like 1,11,111,1111,... using for loop.
#include<stdio.h>

int main()
{
	int i,j,n=7;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("1");
		}
		printf(",");
	}
	
	return 0;
}