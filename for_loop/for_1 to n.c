//3. WAP to print 1 to N using for loop.

#include<stdio.h>

int main()
{
	int x,n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1; x<=n; x++)
	{
		printf("%d ",x);
	}
	
	return 0;
}