//3. Write C program to count number of digits in a number.

#include<stdio.h>

int main()
{
	int n,count=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n = n / 10;
		count++;
	}
	
	printf("The number of digit is : %d",count);
}