//1.Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF

#include<stdio.h>

int sum(int a[],int n)
{
	int sum=0,i;
	
	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	
	return sum;	
}

int main()
{	
	int i,n;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	int a[n];
	
	printf("\nEnter the elements of an array :\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nThe sum of all elements is : %d",sum(a,n));
	
 	return 0;
}
