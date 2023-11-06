//6. WAP to Find max. from given 4 no. using nested if else.

#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	printf("Enter the value of d : ");
	scanf("%d",&d);
	
	(a>b)? (a>c)? (a>d)? printf("a is maximum") : printf("d is maximum") : (c>d)? printf("c is maximum") : printf("d is maximum") : (b>c)? (b>d)? printf("b is maximum"): printf("d is maximum"): (c>d)? printf("c is maximum"): printf("d is maximum");

	
	return 0;
}
