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
	
	printf("\n\n");
	
	for(i=0; i<n; i++)
	{
		if(a[i] < 0)
		{
			printf("%d ",a[i]);
		}
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i] >= 0)
		{
			printf("%d ",a[i]);
		}
	}
	
	printf("\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
 	return 0;
}
