//9. Wap to find sum of diagonal element in 2d array.

#include<stdio.h>

int main()
{
	int rows,cols,i,j,sum=0;
	
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	printf("Enter the number of cols : ");
	scanf("%d",&cols);
	
	int arr[rows][cols];
	
	printf("\nEnter the elements of 2D array :\n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("Enter the value of arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n2D array is :\n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(i == j)
			{
				sum = sum + arr[i][j];
			}
		}
	}
	
	printf("\nThe sum of all anti-diagonal elements is : %d",sum);
	
	return 0;
}
