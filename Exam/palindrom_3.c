//palindrom number or not using printf only (121)

#include<stdio.h>

int main()
{
	int a,b,c,x,y,n;
	
	printf("Enter the value of a : ");
	scanf("%d",&n); 
	
	a = n % 10;
	x = n / 10;
	b = x % 10;
	y = x / 10;
	
	printf("The value is palindrom or not : %d", a==y); 
	
	return 0;
}


