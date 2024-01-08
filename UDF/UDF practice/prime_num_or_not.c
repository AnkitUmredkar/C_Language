//number_prime_or_not

#include<stdio.h>

int a(int n)
{
	int i,count=0;
	
	for(i=1; i<=n; i++)
	{
		if(n % i == 0)
		{
			count++;
		}
	}
	
	return count;
	
}

int main()
{	
	int n,result;
	
	printf("Enter the value : ");
	scanf("%d",&n);
	
	if(a(n) == 2)
	{
		printf("Yes,its a prime number");
	}
	else
	{
		printf("no,its not prime number");
	}

	
 	return 0;
}