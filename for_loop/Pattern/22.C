//A
//B C
//D E F
//G H I J
//K L M N O

#include<stdio.h>

int main()
{
	char i,j,x='A';
	
	for(i='A'; i<='E'; i++)
	{
		for(j='A'; j<=i; j++)
		{
			printf("%c ",x);
			x++;
		}
		printf("\n");
	}
	
	return 0;
}