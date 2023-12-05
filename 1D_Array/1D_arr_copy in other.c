//6. Write a program in C to copy the elements of one array into another array.

#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	printf("\nEnter the elements of array : \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		b[i] = a[i];
	}
	
	printf("\nElements of the original array:\n");
	for(i=0; i<n; i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	printf("\nElements of the copied array:\n");
	for(i=0; i<n; i++)
	{
		printf("b[%d] : %d\n",i,b[i]);
	}
	
	return 0;
}
