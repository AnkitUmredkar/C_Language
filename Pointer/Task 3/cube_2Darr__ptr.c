//2.Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

#include<stdio.h>

void cube(int rows,int cols,int a[rows][cols])
{
	int i,j,ans;
	int *ptr= &a[0][0]; 

	printf("\n\nThe cube of an array is below\n");
	
	for(i=0; i<rows; i++)
 	{
 		for(j=0; j<cols; j++)
		{
			printf("%d ",(*ptr) * (*ptr) * (*ptr));
			ptr++;	
		}
		printf("\n");	
	}
}

int main()
{
 	int rows,cols,i,j;
 	
 	printf("Enter the number rows : ");
 	scanf("%d",&rows);
 	
 	printf("Enter the number cols : ");
 	scanf("%d",&cols);
 	
 	int a[rows][cols];
 	
 	printf("\nEnter the elements of an array \n");
 	
 	for(i=0; i<rows; i++)
 	{
 		for(j=0; j<cols; j++)
		{
			printf("Enter the a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]); 	
		}	
	}
	
	printf("\n\nthe array is below: \n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	cube(rows,cols,a);
 	
 	return 0;
}
