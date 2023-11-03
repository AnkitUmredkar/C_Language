//1. wap to find min. no. from given 2 no. using if else

#include<stdio.h>

int main()
{
	int x,y;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	if(x<y)
	{
		printf("\n x is minimum");
	}
	else
	{
		printf("\n y is minimum");
	}
	
	return 0;
}