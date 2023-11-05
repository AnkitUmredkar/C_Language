//WAP to print sequences like 5,10,15,20,25,... using a while loop.


#include<stdio.h>

int main()
{
	int i=5,n,x=1;
	
	printf("n : ");
	scanf("%d",&n);
	
	while(n>=x)
	{
		printf("%d,",i*x);
		x++;
	}
	
	return 0;
}