//4. Write a program to get two array and create addition of array position wise.
//    ex: A= 1,2,3 B=5,6,7 answer = 6,8,10

#include<stdio.h>

int main()
{
	int n,i,sum=0;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	printf("\nEnter the elements of first array  \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the elements of second array  \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	printf("\nThe first array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nThe second array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",b[i]);
	}
	
	for(i=0; i<n; i++)
	{
		c[i] = a[i] + b[i];
	}
	
	printf("\n\nThe additional array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",c[i]);
	}
	
	return 0;
}