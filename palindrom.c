//palindrom number or not using printf only (12321)

#include<stdio.h>

int main()
{
	int a,b,c,x,y,z,n,i,j,k,l;
	
	printf("Enter the value of a : ");
	scanf("%d",&n); 
	
	a = n % 10;
	x = n / 10;
	b = x % 10;
	y = x / 10;
	c = y % 10;
	z = y / 10;
	i = z % 10;
	j = z / 10;

	printf("The value is palindrom or not : %d", a==j && i==b); 
	
	return 0;
}


