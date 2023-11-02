//even or odd

#include<stdio.h>

int main()
{
	int n,a,b;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	a = n / 2;
	b = a * 2;
	
	printf("\n If the answer is 1 then number is even otherwise odd : %d",b==n);
}