//palindrom number or not using printf only ex.153(1^3 + 5^3 + 3^3 == 153)

#include<stdio.h>

int main()
{
	int a,b,c,x,y,n,sum,i;
	
	printf("Enter the value of a : ");
	scanf("%d",&n);
	
	n = i; 
	
	a = n % 10;
	x = n / 10;
	b = x % 10;
	y = x / 10;
	c = y % 10;
	
	sum = (a*a*a) + (b*b*b) + (c*c*c);
	
	printf("The value is palindrom or not : %d", sum==i); 
	
	return 0;
}


