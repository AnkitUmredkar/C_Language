//6. WAP to find perimeter of circle.

#include<stdio.h>
#include<conio.h>

main()
{
	float p=3.14,r,perimeter;
	
	printf("Enter the value of radius : ");
	scanf("%f",&r);
	
	perimeter = 2*p*r;
	
	printf("\nThe perimeter of circle is %.2f\n" , perimeter);
}
