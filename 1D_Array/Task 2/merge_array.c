//1.Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.

#include<stdio.h>

int main()
{
	int n1,n2,i;
	
	printf("Enter the size of first array : ");
	scanf("%d",&n1);
	
	printf("Enter the size of second array : ");
	scanf("%d",&n2);
	
	int a[n1],b[n2],c[n1+n2];
	
	printf("\nEnter the elements of first array : \n");
	
	for(i=0; i<n1; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the elements of  second array : \n");
	
	for(i=0; i<n2; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n1; i++)
	{
		c[i] = a[i];
	}
	
	for(i=0; i<n2; i++)
	{
		c[n1 + i] = b[i];
	}
	
	printf("\nMerged array is : \n");
	printf("c[%d] : ",n1+n2);
	
	for(i=0; i<n1+n2; i++)
	{
		printf("%d ",c[i]);
	}
	
	return 0;
}