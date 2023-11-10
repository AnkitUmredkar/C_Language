// Write a C program to display the sum of n terms of even natural numbers.
//Test Data :
//Input number of terms : 5
//Expected Output :
//The even numbers are :2 4 6 8 10
//The Sum of even Natural Number upto 5 terms : 30

#include<stdio.h>

int main()
{
	int n,x=1;
	
	printf("n : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		if(x%2==0)
		{
			printf("%d",x);
		}
		x++;
	}
	
	return 0;
}