// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
//Test Data :
//Input the number or terms :5
//Expected Output :
//9 99 999 9999 99999
//The sum of the saries = 111105

#include<stdio.h>

int main()
{
	int n,x=1,t=9,sum=0;
	
	printf("Enter the number of turms : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		printf("%d  ",t);
		sum = sum + t;
		t = (t * 10) + 9;
		x++;
	} 
	
	printf("\nThe sum of series is : %d",sum);
	
	return 0;
}