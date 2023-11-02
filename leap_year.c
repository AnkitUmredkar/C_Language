//leap year or not

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the year : ");
	scanf("%d",&n);
	
	printf("The year is leap or not : %d",n % 4 == 0);
	
	return 0;
}