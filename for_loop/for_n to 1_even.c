//6. WAP to print even no. from N to 1 using for loop.

#include<stdio.h>

int main()
{
	int x,n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(x=n; x>=1; x--)
	{
		if(x % 2 == 0)
		{
			printf("%d ",x);
		}
	}
	
	return 0;
}