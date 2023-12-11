//8. Wap to find the reverse array without using another array.

#include<stdio.h>

int main()
{
	int i,n,j,temp;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter the elements of array : \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nThe reverse array is : ");
	
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}