//prime number or not

#include<stdio.h>

int main()
{	
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0 && n%11!=0 ||(n==2 || n==3 || n==5 || n==7))
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
