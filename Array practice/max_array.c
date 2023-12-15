#include<stdio.h>

int main()
{
	int n,i,j;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter the elements of array : \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	int max = a[0];
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nThe maximum element of array is : ");
	
	for(i=0; i<n; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	
	printf("%d ",max);
	
	
 	return 0;
}
