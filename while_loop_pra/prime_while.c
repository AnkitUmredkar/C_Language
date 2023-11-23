//wap to find entered number is prime or not

#include<stdio.h>

int main()
{
	int n,x=1,count = 0;
	
	printf("Enter the you want : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		if(n % x == 0)
		{
			count++;
		}
		x++;
	}
	
	if(count == 2)
	{
		printf("Entered number is prime");
	}
	else
	{
		printf("Entered number is NOT prime");
	}
	
	return 0;
}
