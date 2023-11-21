//6. WAP to print even no. from N to 1 using do while loop.

#include<stdio.h>

int main()
{
	int n,x;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);

	x=n;

	do
	{
		if(x % 2 == 0)
		{
			printf("%d ",x);
		}
		x--;	
	}while(1<=x);
	 
	
	return 0;
}