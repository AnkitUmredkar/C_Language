//8. write a c program find square root of number without using any function.

#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter the element of an array : \n");
	
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
	
	printf("\nThe sqrt of all element is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",);
	}
	
	return 0;
}