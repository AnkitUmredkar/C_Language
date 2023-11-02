//thrird angle of triangle

#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter the value of first angle a : ");
	scanf("%d",&a);
	
	printf("Enter the value of second angle b : ");
	scanf("%d",&b);
	
	c = 180 - (a + b); 
	
	printf("The third angle of triangle is : %d",c); 
	
	return 0;
}