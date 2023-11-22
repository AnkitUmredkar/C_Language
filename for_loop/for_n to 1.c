//4. WAP to print N to 1 using for loop.

#include<stdio.h>

int main()
{
	int x,n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(x=n; x>=1; x--)
	{
		printf("%d ",x);
	}
	
	return 0;
}