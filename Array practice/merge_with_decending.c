//Write a program in C to merge two arrays of the same size sorted in descending order.
//Test Data :
//Input the number of elements to be stored in the first array :3
//Input 3 elements in the array :
//element - 0 : 1
//element - 1 : 2
//element - 2 : 3
//Input the number of elements to be stored in the second array :3
//Input 3 elements in the array :
//element - 0 : 1
//element - 1 : 2
//element - 2 : 3
//Expected Output :
//The merged array in decending order is :
//3 3 2 2 1 1

#include<stdio.h>

int main()
{
	int n1,n2,i,j;
	
	printf("Enter the size of array : ");
	scanf("%d",&n1);
	
	printf("Enter the size of array : ");
	scanf("%d",&n2);
	
	int a[n1],b[n2],c[n1+n2];
	
	printf("\nEnter the elements of first array : \n");
	
	for(i=0; i<n1; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the elements of first array : \n");
	
	for(i=0; i<n2; i++)
	{
		printf("Enter the value of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n1; i++)
	{
		c[i] = a[i];
	}
	
	for(i=0; i<n2; i++)
	{
		c[n1+i] = b[i];
	}
	
	printf("\nThe merged array is : ");
	
	for(i=0; i<n1+n2; i++)
	{
		printf("%d ",c[i]);
	}	
		
	printf("\nThe decending array is : ");
	for(i=0; i<n1+n2; i++)
	{
		for(j=i+1; j<n1+n2; j++)
		{
			if(c[i]<c[j])
			{
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	
	for(i=0; i<n1+n2; i++)
	{
		printf("%d ",c[i]);
	}
		
	return 0;
}