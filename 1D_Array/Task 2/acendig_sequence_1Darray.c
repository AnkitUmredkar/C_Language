//6 wap to acending order in 1d array.

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
		if(arr[i] >= arr[0])
		{
			printf("%d ",arr[i]);
		}
		
	}
	
	
}