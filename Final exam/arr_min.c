//WAP to find the maximum element from the 1D/2D array.
#include<stdio.h>

int main()
{
	int i,j,rows,cols;
	
	printf("rows : ");
	scanf("%d",&rows);
	
	printf("cols : ");
	scanf("%d",&cols);
	
	int arr[rows][cols];
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("arr[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	int min = arr[0][0];
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(min>arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	
	printf("min = %d",min);
	
	return 0;
}