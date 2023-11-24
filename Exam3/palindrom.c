// 7. wap to check number is palindrom or not.

#include<stdio.h>

main()
{
	int n,r,org,p=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	org=n;
	
	while(n>0)
	{
		r = n % 10;
		p = r + (p*10);
		n = n / 10;
	}
	
	if(p==org)
	{
		printf("Yes, entered number is palindrom");
	}
	else
	{
		printf("no, entered number is not palindrom");
	}
	
	return 0;
}