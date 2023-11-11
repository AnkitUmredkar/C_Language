// Write a C program that displays the n terms of square natural numbers and their sum.
//1 4 9 16 ... n Terms
//Test Data :
//Input the number of terms : 5
//Expected Output :
//The square natural upto 5 terms are :1 4 9 16 25
//The Sum of Square Natural Number upto 5 terms = 55

#include<stdio.h>

int main()
{
	int n,x=1,sum=0,sq;
	
	printf("n : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		sq = x*x;
		printf("%d ",sq);
		sum = sum + sq;
		x++;
	}
	
	printf("\nThe sum of all numbers square is : %d",sum);
	
	return 0;
}