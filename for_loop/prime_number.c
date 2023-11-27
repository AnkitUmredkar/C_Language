#include<stdio.h>

int main()
{
	int n,i,j,check=0,sum=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(i=2; i<=n; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i % j == 0)
			{
				check = 1;
			}
		}
		if(check == 0)
		{
			printf("%d ",i);
			sum = sum + i;
		}
		check = 0;
	}
	
	printf("\nThe sum of all prime number is : %d",sum);
	
	return  0;
}