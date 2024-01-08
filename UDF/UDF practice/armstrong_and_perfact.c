// Write a program in C to check Armstrong and Perfect numbers using the function.

#include<stdio.h>

int perfact(int n)
{
	int i,sum=0;
	
	for(i=1; i<n; i++)
	{
		if(n % i == 0)
		{
			sum = sum + i;
		}
	}
	
	return sum;
}

int arm(int n)
{
	int r,arms=0,org;
	
	org=n;
	
	while(n>0)
	{
		r = n % 10;
		arms = arms + (r*r*r);
		n = n / 10;
	}
	
	return arms;
}

int main()
{	
	int n,org,i;
	
	printf("Enter the value : ");
	scanf("%d",&n);
	
	org=n;
	
	if(org == perfact(n))
	{
		printf("\nYes, its a perfact number");
	}
	else
	{
		printf("\nno,its a not perfact number");	
	}
	
	if(org == arm(n))
	{
		printf("\nYes,its a armstrong number");
	}
	else
	{
		printf("\nNo,its a not armstrong number");
	}
	
 	return 0;
}