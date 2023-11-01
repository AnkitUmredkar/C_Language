//4. WAP to Find area of triangle.

#include<stdio.h>
#include<conio.h>

main()
{
	float b,h,area;
	
	printf("Enter the value of base : ");
	scanf("%f",&b);
	
	printf("Enter the value of height : ");
	scanf("%f",&h);
	
	area = 0.5*b*h;
	
	printf("\nThe area of triangle is %.2f\n" , area);
}