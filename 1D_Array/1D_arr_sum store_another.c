//3. Write a Program to perform the addition operation of two 1D arrays & and store it in another array. Keep in mind that both array sizes must be the same.

#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	printf("\nEnter the elements of first array : \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the elements of second array : \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n; i++)
	{
		c[i] = a[i] + b[i];
	}
	
	printf("\nThe addition operation of two 1D arrays is : \n");
	
	for(i=0; i<n; i++)
	{
		printf("c[%d] = %d\n",i,c[i]);
	}
	
	return 0;
}
