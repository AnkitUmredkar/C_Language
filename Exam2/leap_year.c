//10. wap to find total leap year between given two number.

#include<stdio.h>

int main()
{

	int f_year,l_year,total,a;
	printf("Enter year :");
	scanf("%d",&f_year);
	printf("year last :");
	scanf("%d",&l_year);
	
	total=l_year-f_year;
	a=(total/4) + 1;
	printf("The number of leap year is : %d",a);
	
	return 0;
}
