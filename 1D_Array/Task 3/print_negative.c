// 1. Write a C program to print all negative elements in an array.

#include<stdio.h>

int main()
{
	int n,i,temp,j;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter the elements of array  \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nThe negative elements of the array is : ");
	
	for(i=0; i<n; i++)
	{
		if(a[i] < 0)
		{
			printf("%d ",a[i]);
		}
	}
	
	
 	return 0;
}
