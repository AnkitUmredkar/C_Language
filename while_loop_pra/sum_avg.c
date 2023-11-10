//Write a program in C to read 10 numbers from the keyboard and find their sum and average

#include<stdio.h>

int main()
{
	int n,x=1,sum=0;
	float avg;
	
	printf("n : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		sum = sum + x;
		x++;
	}
	
	avg = sum / n;
	
	printf("The sum of n number is : %d\n",sum);
	printf("The avg of n number is : %.2f",avg);
	
	return 0;
}