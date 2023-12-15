//22. Write a program in C to find the transpose of a given matrix.
//Test Data :
//Input the rows and columns of the matrix : 2 2
//Input elements in the first matrix :
//element - [0],[0] : 1
//element - [0],[1] : 2
//element - [1],[0] : 3
//element - [1],[1] : 4
//Expected Output :
//The matrix is :
//
//1 2
//3 4
//
//The transpose of a matrix is :
//1 3
//2 4

#include<stdio.h>

int main()
{
	int rows,cols,i,j;
	
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	printf("Enter the number of rows : ");
	scanf("%d",&cols);
	
	int a[rows][cols],b[rows][cols];
	
	printf("\nEnter the elements of array : \n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe orignal array is : \n");
	
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
			b[j][i] = a[i][j];
		}
	}
	
	printf("\nThe transpose of array is : \n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
 	return 0;
}
