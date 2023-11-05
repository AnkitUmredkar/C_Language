//WAP to print sequences like 2,4,8,16,32,... using for loop.


#include<stdio.h>

int main()
{
	int i,n;
	
	printf("n : ");
	scanf("%d",&n);
	
	for(i=2; i<=n;)
	{
		
		printf("%d ",i);
		 i= i*2;
	
	}

//	int n,x=2;
//	
//	printf("Enter the value : ");
//	scanf("%d",&n);
//	
//	while(x<=n)
//	{
//		printf("%d ",x);
//		x *= 2;
//	}
	return 0;
}