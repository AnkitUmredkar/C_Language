//6.WAP to find a the answer given formula (x-y-z)3.

#include<stdio.h>

int main()
{
	int x,y,z,ans;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	printf("Enter the value of z : ");
	scanf("%d",&z);
	
	ans =(x*x*x) - (y*y*y) - (z*z*z) - 3*(x*x*y) + 3*(x*y*y) - 3*(y*y*z) - 3*(y*z*z) + 3*(x*z*z) - 3*(x*x*z) + 6*(x*y*z);
	
	printf("\nThe answer is : %d",ans);
	
	return 0;
}