//3. Write a program in C to count the frequency of each element of an array.

#include<stdio.h>

int main()
{
	int n,i,j,c=0;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	int a[n],freq[i];
	
	printf("\nEnter the elements of an array\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
		freq[i] = -1;
	}
	
	
	return 0;
}