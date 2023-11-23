//2. WAP to demonstrate the use of continue keyword

#include<stdio.h>

int main()
{
	int n,x,y;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	printf("Enter the number to skip  : ");
	scanf("%d",&y);
	
	for(x=1; x<=n; x++)
	{
		if(x==y)
		{
			continue;
		}
		printf("%d ",x);
	}
	
	return 0;
}