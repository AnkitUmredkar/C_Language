//10. wap to find total leap year between given two number.

#include<stdio.h>

int main()
{

	int fy,ly,total,a;
	printf("Enter year :");
	scanf("%d",&fy);
	printf("year last :");
	scanf("%d",&ly);
	
	total=ly-fy;
	a=(total/4) + 1;
	printf("The number of leap year is : %d",a);
	
	return 0;
}
