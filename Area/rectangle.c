//3. WAP to F6nd area of rectangle.

#include<stdio.h>
#include<conio.h>

main()
{
	float w,l,area;
	
	printf("Enter the value of width : ");
	scanf("%f",&w);
	
	printf("Enter the value of length : ");
	scanf("%f",&l);
	
	area = w*l;
	
	printf("\nThe area of rectangle is %.2f\n" , area);
}