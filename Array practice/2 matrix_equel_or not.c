//Write a program in C to accept two matrices and check whether they are equal.
//Test Data :
//Input Rows and Columns of the 1st matrix :2 2
//Input Rows and Columns of the 2nd matrix :2 2
//Input elements in the first matrix :
//element - [0],[0] : 1
//element - [0],[1] : 2
//element - [1],[0] : 3
//element - [1],[1] : 4
//Input elements in the second matrix :
//element - [0],[0] : 1
//element - [0],[1] : 2
//element - [1],[0] : 3
//element - [1],[1] : 4
//Expected Output :
//The first matrix is :
//1 2
//3 4
//The second matrix is :
//1 2
//3 4
//The Matrices can be compared :
//Two matrices are equal.

#include<stdio.h>

int main()
{
	int rows,cols,i,j,check=0 ;
	
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	printf("Enter the number of cols : ");
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
	
	printf("\nEnter the elements of second array : \n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("Enter the value of b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nThe first array is : \n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe second array is : \n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	\\
	
	for(i=0; i<rows; i++)
	{
		for(j=; j<cols; j++)
		{
			if(a[i][j] && b[i][j] )
			{
				check = 1;
			}
			else
			{
				check = 0;
			}
		}
	}
	
	if(check == 1)
	{
		printf("\nGiven matrieces are equel");
	}
	else
	{
		printf("\nGiven matrieces are not equel");
	}
	
	
 	return 0;
}