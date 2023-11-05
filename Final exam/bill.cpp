#include<stdio.h>

int main()
{
	int unit,total;
	double amt;
	
	printf("Enter the unit : ");
	scanf("%d",&unit);
	
//	0 to 50 = 0.50
//	50 to 100 = 1
//	100 to 150 = 1.5
//	150 to up = 2
	
	if(unit>=0 && unit<=50)
	{
		amt = unit * 0.50;
		amt = amt + (amt * 0.20);
	}
	else if(unit>=51 && unit<=100)
	{
		amt = ((unit - 50)*1) + ((50 * 0.50));
		amt = amt + (amt * 0.20);
	}
	else if(unit>=101 && unit<=150)
	{
		amt = ((unit - 100)*1.5) + ((50 * 0.50) + (50 * 1));
		amt = amt +(amt * 0.20);
	}
	else if(unit>=150)
	{
		amt = ((unit-150)*2) + ((50 * 0.50) + (50 * 1) + (50 * 1.5));
		amt = amt +(amt * 0.20);
	}
	
	printf("Your total bill is %.2lf",amt);
}