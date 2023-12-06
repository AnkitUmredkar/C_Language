//4 Wap to find maximum from the 1d array.

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
	
	int max=arr[0];
	
	for(i=0; i<n; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	
	printf("\nThe maximum element of the array is : %d",max);
}