//1. WAP to Find area of circle.

#include<stdio.h>
#include<conio.h

main()
{
	float area,r,p=3.14;
	
	printf("Enter the value of radius : ");
	scanf("%f",&r);
	
	area = p*r*r;
	
	printf("\nThe area of circle is : %.2f",area);
}
