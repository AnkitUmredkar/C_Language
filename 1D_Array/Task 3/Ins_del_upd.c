// 3. Write a C program to Insert, Delete, and update operations of the element into the array

#include<stdio.h>

int main()
{	
	int n,i,j,target,check=0;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter the elements of array  \n");
	
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
	
	printf("\n\nEnter the element which you want to delet : ");
	scanf("%d",&target);
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[j] == target)
			{
				check = 1;
			}
			if(check == 1)
			{
				a[j] = a[j+1];
			}
		}
		check = 0;
	}
	
	printf("\n\nAfter removing target value, The array is : ");
	
	for(i=0; i<n-1; i++)
	{
		printf("%d ",a[i]);
	}
	
 	return 0;
}
