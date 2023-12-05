//2. WAP to find the sum of a 1D array.

#include<stdio.h>

int main()
{
	int n,i,sum=0;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter the elements of array  \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of arr[%d] : ",i);
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n\nThe sum of all elements of array is : %d",sum);
	
	return 0;
}
