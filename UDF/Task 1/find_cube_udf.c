//1 Write a Program to find the cube of a given number using UDF.For example,

#include<stdio.h>

int cube(int n)
{
	return n*n*n;
}

int userinput()
{
	int n;
	
	printf("Enter the value : ");
	scanf("%d",&n);
	
	cube(n);
}

int main()
{	
	printf("\nThe cube is : %d",userinput());
	
 	return 0;
}

