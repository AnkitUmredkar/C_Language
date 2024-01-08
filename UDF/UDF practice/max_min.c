#include<stdio.h>

int maxarr(int a[],int n)
{
	int max = a[0],i;
	
	for(i=0; i<n; i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}
	}
	
	return max;
}

int minarr(int a[],int n)
{
	int min = a[0],i;
	
	for(i=0; i<n; i++)
	{
		if(min>a[i])
		{
			min = a[i];
		}
	}
	
	return min;
}

int main()
{
	int n,i;
	
	printf("Enter the size : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);	
	}
	
	printf("\n\nthe array is : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}	 
	
	printf("\nThe max is : %d",maxarr(a,n));
	printf("\nThe min is : %d",minarr(a,n));
	 
 	return 0;
}
