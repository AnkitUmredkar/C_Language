//5. Write a program in C to read n number of values in an array and display them in reverse order.

#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter the elements of array : \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe original array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n\nThe reversed array is : ");
	
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}