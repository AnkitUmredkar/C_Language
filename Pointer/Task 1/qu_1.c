#include<stdio.h>

int main()
{
 	int n,i;
 	
 	printf("Enter the size of an array  : ");
 	scanf("%d",&n);
 	
 	int a[n];
 	
 	printf("\nEnter the elements : \n");
 	
 	for(i=0; i<n; i++)
 	{
 		printf("Enter the a[%d] : ",i);
 		scanf("%d",&a[i]);
	}
	
	printf("\nThe reverse array is : ");
	
	int *ptr = &a[n-1];
	
	for(i=n-1; i>=0; i--)
 	{
 		printf("%d ",*ptr);
 		ptr--;
	}
 	
 	return 0;
}
