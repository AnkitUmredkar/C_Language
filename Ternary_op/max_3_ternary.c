//5. WAP to Find max. from 3 using ternary operator.

#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);	
	
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	(a>b)? (a>c)? printf("a is maximum") : printf("c is maximum") : (b>c)? printf("b is maximum") : printf("c is maximum");
	
	return 0;
}