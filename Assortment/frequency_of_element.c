//3. Write a program in C to count the frequency of each element of an array.

#include<stdio.h>

int main()
{
	int i,j,freq=1,n;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter the elemnets of an array : \n");
	
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
	
	printf("\n\nThe frequency of all elements is : \n");
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{
				freq++;
				a[j] = 0;
			}
		}
		if(a[i] != 0)
		{
			printf(" %d --> %d\n",a[i],freq);
		}
		freq=1;
	}
	
	return 0;
}
