#include<stdio.h>

int main()
{
	int n,start,end,total,year,i,x=0;
	
	printf("Enter the first year : ");
	scanf("%d",&start);
	
	printf("Enter the last year : ");
	scanf("%d",&end);
	
	total = end - start;
	year = (total / 4) + 1;
	
	int leapyear[year];
	
	for(i=start; i<=end; i++)
	{
		if(i % 4 == 0)
		{
			leapyear[x] = i;
			x++;
		}
	}
	
	printf("\nThe array of leapyear is : ");
	
	for(i=0; i<x; i++)
	{
		printf("%d ",leapyear[i]);
	}
	return 0;
}
