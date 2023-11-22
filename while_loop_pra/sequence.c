// Write a program in C to display the n terms of a harmonic series and their sum.
//1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
//Test Data :
//Input the number of terms : 5
//Expected Output :
//1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
//Sum of Series upto 5 terms : 2.283334

#include <stdio.h>

int main() 
{
	int n,x=1;
	float sum=0.0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		printf("1/%d ",x);
		if(x<n)
		{
			printf(" + ");
		}
		sum = sum + 1.0 / x;
		x++;
	}
	
	printf("\nThe sum is : %f",sum);

    return 0;
}
