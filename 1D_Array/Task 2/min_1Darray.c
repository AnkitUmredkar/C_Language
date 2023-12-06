//5 Wap to find minimum from the 1d array.

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
	
	int min=arr[0];
	
	for(i=0; i<n; i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	
	printf("\nThe minimum element of the array is : %d",min);
}