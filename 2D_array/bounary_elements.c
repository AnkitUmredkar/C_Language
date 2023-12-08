//4 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.

#include<stdio.h>

int main()
{
	int i,j,rows=5,cols=5,sum=0;
	
	int a[rows][cols];
	
	printf("Enter the elements of array\n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe 2D array is below : \n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe all boundary elements of array is below : \n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				printf("%d ",a[i][j]);
				sum = sum + a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\nThe sum of all boundary elements is : %d",sum);
	
	return 0;
}
	