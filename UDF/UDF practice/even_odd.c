//even_odd

#include<stdio.h>

int a(int n)
{
	if(n%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("odd");
	}
}

int main()
{	
	int n;
	
	printf("Enter the value : ");
	scanf("%d",&n);

	
 	return 0;
}

