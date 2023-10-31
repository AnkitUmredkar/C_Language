//4.WAP to find a the answer given formula (x-y)3.

#include<stdio.h>

int main()
{
	int x,y,ans;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	ans = (x*x*x)-(3*x*x*y)+(3*x*y*y)-(y*y*y);
	
	printf("\nThe answer is : %d",ans);
	
	return 0;
}