//2. Write C Program to perform a swapping of two variables without using third variable.

#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("\nValues before swapping : \n");
	printf("a : %d\n",a);
	printf("b : %d",b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\n\nValues after swapping : \n");
	printf("a : %d\n",a);
	printf("b : %d",b);
	
	return 0;
}