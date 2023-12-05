//4. WAP to print the multiplication table of each element of the array.

#include<stdio.h>

int main()
{
	int n,i,j;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter the elements of array  \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\nThe multiplication table is here \n");
	
	for(i=0; i<n; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d x %d = %d\n",arr[i],j,arr[i]*j);
		}
		printf("\n");
	}
	
	return 0;
}
