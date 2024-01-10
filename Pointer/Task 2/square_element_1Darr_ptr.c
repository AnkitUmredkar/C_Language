//1 Write a Program to find the square of each element of a given 1D array using a Pointer.

#include<stdio.h>

int main()
{
	int n,i,ans;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter the elements of an array \n");
	
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
	
	int *ptr=&a[0];
	
	printf("\n\nThe square of all elements is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",(*ptr) * (*ptr));
		ptr++;
	}
	
 	return 0;
}
