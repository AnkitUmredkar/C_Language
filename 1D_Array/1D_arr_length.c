//1. Write a Program to find the length of a 1D array.

#include<stdio.h>

int main()
{
	int n,i,length;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter the elements of array  \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	length = sizeof(arr)/sizeof(arr[0]);
	
	printf("\n\nThe length of 1D array is : %d",length);
	
	return 0;
}