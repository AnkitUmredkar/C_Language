//magic number or not ex.123(1*2*3 == 1+2+3)

#include<stdio.h>

int main()
{
	int n,a,b,c,x,y,z;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	a = n % 10;
	x = n / 10;
	b = x % 10;
	y = x / 10;
	
	z = a * b * y;
	c = a + b + y;
	
	printf("The value is magic number or not : %d",z == c);
	
	return 0;
}

