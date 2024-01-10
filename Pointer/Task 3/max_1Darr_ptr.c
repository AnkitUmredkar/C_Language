//3. wap to find maximum from array using pointer.

#include<stdio.h>

int main()
{
	
	int n,i;
	
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
	
	int *max = &a[0]; 
	
	for(i=0; i<n; i++)
	{
		if(*max < *(max + i))
		{
			*max = *(max + i);	
		}	
	}
	
	printf("\n\nThe largest element in the array is : %d",*max);
	
 	return 0;
}
