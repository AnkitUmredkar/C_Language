//5. WAP to print odd no. from 1 to N using do while loop.

#include<stdio.h>

int main()
{
	int x=1,n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	do
	{
		if(x % 2 == 1)
		{
			printf("%d ",x);	
		}
		x++;
	}while(x<=n);
	
	return 0;
}