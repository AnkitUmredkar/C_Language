//5. WAP to print odd no. from 1 to N using for loop.

#include<stdio.h>

int main()
{
	int x,n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1; x<=n; x++)
	{
		if(x % 2 == 1)
		{
			printf("%d ",x);
		}
	}
	
	return 0;
}