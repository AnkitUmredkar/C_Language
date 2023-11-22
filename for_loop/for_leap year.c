//7. WAP to Find leap year from 2000 to 3000 using for Loop.

#include<stdio.h>

int main()
{
	int x;
	
	for(x=2000; x<=3000; x+=4)
	{
		printf("%d ",x);
	}
	
	return 0;
}