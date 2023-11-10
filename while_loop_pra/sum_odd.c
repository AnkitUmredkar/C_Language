//wap to find sum of all odd number

#include<stdio.h>

main()
{
	int n,x=1,sumodd=0;
	
	printf("n : ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		if(x % 2 == 1)
		{
			sumodd = sumodd + x;
		}
		x++;
	}
	
	printf("%d",sumodd);
}