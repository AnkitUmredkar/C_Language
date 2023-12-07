//6 wap to acending order in 1d array.

#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n],temp;
	
	printf("\nEnter the elements of array \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\nThe decending sequence of array is : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
 	return 0;
}
