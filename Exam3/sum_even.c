// 2. wap to find sum of even number between 1 to 28.

#include<stdio.h>

int main()
{
	int x=1,sumeven=0;
	
	while(x<=28)
	{
		if(x % 2 == 0)
		{
			sumeven = sumeven + x;
		}	
		x++;
	}
	
	printf("The sum of all even number between 1 to 28 is : %d",sumeven);
		
	return 0;
}