//5.WAP to perform row-wise sum of 2D array.

#include<stdio.h>

int main()
{
	int i,j,rows,cols,sum=0;
	
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	printf("Enter the number of cols : ");
	scanf("%d",&cols);
	
	int a[rows][cols];
	
	printf("\nEnter the elements of an array\n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("Enter the a[%d][%d] : ",i,j);
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
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			sum = sum + a[i][j];
		}
		printf("\nThe sum of %d row is %d",i+1,sum);
		sum=0;
	}
	
	return 0;
}