//wap to find unique element in array (unique --> no repeat)

#include<stdio.h>

int main()
{
	int n,i,check=0,j;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\nEnter the element of an arry : \n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter the a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i] == a[j] && (i != j))
			{
				check = 1;
			}
		}
		if(check == 0)
		{
			printf("%d ",a[i]);
		}
		check=0;
	}
	
 	return 0;
}
