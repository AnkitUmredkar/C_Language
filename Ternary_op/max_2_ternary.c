//1. WAP to Find max. from given 2 no. using ternary operator

#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);	
	
	(a>b)? printf("a is maximum") : printf("b is maximum");
	
	return 0;
}