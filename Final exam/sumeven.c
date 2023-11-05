//WAP to find the sum of all odd numbers from 1 to n using a for loop.


#include<stdio.h>

int main()
{
	int i,n,sum =0;
	
	printf("n : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		if(i % 2 == 1)
		{
			sum = sum + i;
		}
		
	}
	printf("%d ",sum);

	return 0;
}