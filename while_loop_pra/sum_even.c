//sum of all even numberusing while loop.

#include<stdio.h>

int main()
{
	int n,x=1,sumeven=0;
	
	printf("n : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		if(x % 2 == 0)
		{
			sumeven = sumeven + x;
		}
		x++;
	}
	
	printf("%d",sumeven);
	
	return 0;
}