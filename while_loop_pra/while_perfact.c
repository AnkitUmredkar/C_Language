#include<stdio.h>

int main()
{
	int n,r,i=1,sum=0;
	
	printf("n : ");
	scanf("%d",&n);

	while(i<n)
	{
		if(n%i == 0)
		{
			sum = sum + i;
		}
		
		i++;
	}
	
	if(n==sum)
	{
		printf("entered number is perfact");
	}
	else
	{
		printf("entered number is not perfact");
	}
	
	return 0;
}