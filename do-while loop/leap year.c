//7. WAP to Find leap year from 2000 to 3000 using do while Loop.

#include<stdio.h>

int main()
{
	int x = 2000;
	
	do
	{
		if(x % 4 == 0)
		{
			printf("%d ",x);
		}
		x++;
	}while(x<=3000);
	
	return 0;
}