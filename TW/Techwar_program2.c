#include<stdio.h>

int main()
{
	int n,i,j,temp;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter the elements\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nThe array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	int t;
	printf("\n\nEnter the number which you want to rotate : ");
	scanf("%d",&t);
	
	printf("\nThe array is : ");
	
	for(i=t; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0; i<t; i++)
	{
		printf("%d ",a[i]);
	}
	
 	return 0;
}
