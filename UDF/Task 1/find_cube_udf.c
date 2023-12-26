//1 Write a Program to find the cube of a given number using UDF.For example,

#include<stdio.h>

void cube(int n)
{
	printf("\nThe cube of a number is : %d",n*n*n);
}

int main()
{
 	int n;
 	
 	printf("Enter the : ");
 	scanf("%d",&n);
 	
 	cube(n);
 	
 	return 0;
}
