//2. sum.

#include<stdio.h>

int main()
{
	int i,j,rows,cols,sum = 0,len;
	
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	
	printf("Enter the number of cols : ");
	scanf("%d",&cols);
	
	int a[rows][cols];
	
	printf("\nEnter the elements of array\n");
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			sum = sum + a[i][j];
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
	
	printf("\nThe sum of all elements of 2D array is : %d",sum);
	
	return 0;
}
