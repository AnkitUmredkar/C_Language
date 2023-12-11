//7. Write a C program to find the largest number in array.[2D]

#include<stdio.h>

int main()
{
	int i,j,rows,cols;
	
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	printf("Enter the number of cols : ");
	scanf("%d",&cols);
	
	int a[rows][cols],sum = 0;
	
	printf("\nEnter the elements of array\n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int max = a[0][0];
	
	printf("\nThe 2D array is below : \n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	
	printf("\nThe maximum element in 2D array is : %d",max);
	
	return 0;
}