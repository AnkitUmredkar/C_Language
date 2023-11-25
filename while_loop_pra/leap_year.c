//leapyear between given two year

#include<stdio.h>

int main()
{
	int fy,ly,total,year;
	
	printf("Enter the first year : ");
	scanf("%d",&fy);
	
	printf("Enter the second year : ");
	scanf("%d",&ly);
	
	total = ly-fy;
	year = (total / 4) + 1;
	
	printf("The number of year is : %d",year);
	
	return 0;
}
