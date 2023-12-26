//1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.

#include<stdio.h>

int sumofarray(int a[],int n)
{
	int sum = 0,i;
	
	printf("\nEnter the elements of an array : \n");
 	
 	for(i=0; i<n; i++)
 	{
 		printf("Enter the a[%d] : ",i);
		scanf("%d",&a[i]);	
	}
	
	for(i=0; i<n; i++)
 	{
		sum = sum + a[i];	
	}
	
	return sum;
}

int main()
{
 	int n,i;
 	
 	printf("Enter the size of an array : ");
 	scanf("%d",&n);
 	
 	int a[n];
 	
 	printf("\nThe sum of an array is : %d",sumofarray(a,n));
 	
 	return 0;
}
