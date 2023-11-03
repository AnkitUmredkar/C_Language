//3. Write C program to convert temperature from degree Celsius to Fahrenheit.(f=(9.5*c)+32)

#include<stdio.h>

int main()
{

	float f,c;
	
	printf("Enter the temperature of degree celsius : ");
	scanf("%f",&c);
	
	f = (9.5*c) + 32;
	
	printf("\nThe convertation from degree Celsius to fahrenheit is : %.2f",f);
	
	return 0;
}
