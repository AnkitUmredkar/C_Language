#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],j=0,k=0;
	
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
	
	for(i=0; i<n; i++)
	{
		if(a[i] % 2 == 0)
		{
			b[j] = a[i];
			j++;
		}
		else
		{
			c[k] = a[i];
			k++;
		}
	}
	
	printf("%d",j);
	
//				for(i=0; i<j; i++)
//	{
//		printf("\n%d ",b[i]);
//	}


	printf("\nThe all even number of array is : ");
	
	for(i=0; i<j; i++)
	{
		printf("%d ",b[j]);
	}
	
	printf("\nThe all odd number of array is : ");
	
	for(i=0; i<k ; i++)
	{
		printf("%d ",c[i]);
	}
	
	return 0;
}