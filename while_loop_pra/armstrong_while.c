//wap to find entered number is armstrong or not using while loop.

#include<stdio.h>

int main()
{
	int n,r,org,arm=0;
	
	printf("n : ");
	scanf("%d",&n);
	
	org = n;
	
	while(n>0)
	{
		r = n % 10;
		arm = arm + (r*r*r);
		n = n / 10;
	}
	
	if(arm == org)
	{
		printf("Yes, you entered armstrong number");
	}
	else
	{
		printf("You entered number is not armstrong");
	}
	return 0;
}
