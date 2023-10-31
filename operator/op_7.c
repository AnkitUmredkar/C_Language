//7.WAP to find a the answer given formula (x+y+z)2.

#include<stdio.h>

int main()
{
	int x,y,z,ans;

	printf("enter the value of x : ");
	scanf("%d",&x);

	printf("enter the value of y : ");
	scanf("%d",&y);
	
	printf("enter the value of z : ");
	scanf("%d",&z);
	
	ans = (x*x) + (y*y) + (z*z) + (2*(x*y))+(2*(y*z))+(2*(z*x));
	
	printf("\nThe answer is : %d" , ans);
	
	return 0;
}