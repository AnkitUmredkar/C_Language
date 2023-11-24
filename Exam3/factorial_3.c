// 3. wap to find factorial of 3 using while loop.

#include<stdio.h>

int main()
{
	int x=1,n=3,f=1;
	
	while(x<=n)
	{
		f = f * x;
		x++;
	}
	
	printf("The factorial of 3 is : %d",f);
	
	return 0;
}