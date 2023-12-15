//wap to perform row-wise sum of 2D array.

#include<stdio.h>

int main()
{
	int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

 
    int arr[rows][cols];

  
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++)
	 {
        for (int j = 0; j < cols; j++) 
		{
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Calculate and print row-wise sum
//    printf("Row-wise sums:\n");
//    for (int i = 0; i < rows; i++) {
//        int rowSum = 0;
//        for (int j = 0; j < cols; j++) {
//            rowSum += arr[i][j];
//        }
//        printf("Sum of elements in row %d: %d\n", i + 1, rowSum);
//    }
    
    for (int i = 0; i < rows; i++)
	 {
        for (int j = 0; j < cols; j++) 
		{
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
	int i,j,n;
   printf("\col-wise sum :\n");
   
   for(i=0; i<cols; i++)
   {
   		int sum=0;
   		for(j=0; j<rows; j++)
   		{
   			sum = sum + arr[j][i];
		}
		printf("The sum of cols %d : %d\n",j+1,sum);
   }
	
 	return 0;
}

