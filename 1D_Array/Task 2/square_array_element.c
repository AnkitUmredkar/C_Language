//3 Write a Program to find square of each element from the given array.

#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter the size of first array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter the elements of array\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]*arr[i]);
	}
	
	return 0;
}