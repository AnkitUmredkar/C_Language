#include<stdio.h>

int main()
{
 	int n,len,target,check=0,i,j;
 	
 	printf("Enter the size of an array : ");
 	scanf("%d",&n);
 	
 	int a[n];
 	
 	printf("\nEnter the elements of an array :\n");
 	
 	for(i=0; i<n; i++)
 	{
 		printf("Enter a[%d] : ",i);
 		scanf("%d",&a[i]);
	}
	
	printf("\nThe array is : ");
	
	for(i=0; i<n; i++)
 	{
 		printf("%d ",a[i]);
	}
	
	printf("\nEnter the element which you want to delet : ");
 	scanf("%d",&target);
	
	for(i=0; i<n; i++)
 	{
 		for(j=0; j<n; j++)
 		{
 			if(a[j] == target)
			{
				check = 1;	
			}
			if(check == 1)
			{
				a[j] = a[j+1];	
			} 	
		}
		check=0;
	}
	
	printf("\nAfter removing entered element array is : ");
	
	for(i=0; i<n-1; i++)
 	{
 		printf("%d ",a[i]);
	}
	 	
 	return 0;
}
