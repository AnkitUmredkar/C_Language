//Write a program in C to display the cube of the number up to an integer.

#include<stdio.h>

int main()
{
	int n,x=1,sum=0;
	float avg;
	
	printf("n : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		printf("The number is %d and cube of %d is : %d\n",x,x,x*x*x);
		x++;
	}
	
	return 0;
}