//1.WAP to find a the answer given formula (x+y)2.

#include<stdio.h>

int main()
{
	int x,y,ans;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	ans = (x*x)+(2*x*y)+(y*y);
	
	printf("\nThe answer is : %d",ans);
	
	return 0;
}