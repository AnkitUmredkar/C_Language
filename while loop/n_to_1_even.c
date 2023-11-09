//6. WAP to print even no. from N to 1 using while loop.

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	int x=n;
	while(x>=1)
	{
		if(x % 2 == 0)
		{
			printf("%d ",x);
		}
		x--;
	}
	
	return 0;
}
