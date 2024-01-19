//4. Write a C program to left-rotate and right-rotate an array without using another array.

#include<stdio.h>

int main()
{
	int n,i,c;
	
	printf("Enter the size of an first array : ");
	scanf("%d",&n);
	
	c=n;
	int a[n];

	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}

	printf("\nAfter the rotate array : ");
	
	for(i=0; i<n; i++)
	{
		c--;
		printf("%d ",a[c]);
	}

	
 	return 0;
}
