//1. WAP to demonstrate the use of break keywords.

#include<stdio.h>

int main()
{
	int n,x,y;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	printf("Enter the limit : ");
	scanf("%d",&y);
	
	for(x=1; x<=n; x++)
	{
		printf("%d ",x);
		if(x==y)
		{
			break;
		}
	}
	
	return 0;
}