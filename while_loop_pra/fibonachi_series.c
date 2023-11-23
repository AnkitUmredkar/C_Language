//print fibonachi series

#include<stdio.h>

int main()
{
	int first=0,second=1,add,x=0,n;
	
	printf("Enter the limit of series : ");
	scanf("%d",&n);
	
	while(x<n)
	{
		printf("%d ",first);
		add = first + second;
		first = second;
		second = add;
		x++;
	}
	
	return 0;
}
