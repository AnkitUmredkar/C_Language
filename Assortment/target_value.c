//6. Write a program in C to find a pair of target value given by user.

#include<stdio.h>

int main()
{
	int i,n,j,temp,target;
	
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
	
	printf("\n\nEnter the targeted value : ");
	scanf("%d",&target);
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] + a[j] == target)
			{
				printf("(%d , %d) ",a[i],a[j]);
			}
		}
	}

	return 0;
}
