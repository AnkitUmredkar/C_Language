//1. WAP to get the array and count & remove all duplicate values in the array.

#include<stdio.h>

int main()
{
	int i,n,j,k;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter the elements of array : \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{
				for(k=j; k<n; k++)
				{
					a[k] = a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	
	printf("\n\nThe array after remove duplicate element : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}