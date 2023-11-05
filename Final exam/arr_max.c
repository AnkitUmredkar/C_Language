//WAP to find the maximum element from the 1D/2D array.
#include<stdio.h>

int main()
{
	int i,j,rows,cols,max = 0;
	
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
	
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			if(max<arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	
	printf("max = %d",max);
	
	return 0;
}