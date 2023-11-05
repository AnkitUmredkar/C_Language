//24.WAP to print sequences like 2,22,222,2222,... using while loop.


#include<stdio.h>

int main()
{
	int i=0,n=6;
	
	while(n>1)
	{
		i = i*10+2;
		printf("%d,",i);
		n--;
	}
	
	return 0;
}