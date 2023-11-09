//4. WAP to print N to 1 using while loop.

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	int x=n;
	while(x>=1)
	{
		printf("%d ",x);
		x--;
	}
	
	return 0;
}
