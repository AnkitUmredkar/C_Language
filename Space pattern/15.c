//A B C D E
//  A B C D
//    A B C
//      A B
//        A

#include<stdio.h>

int main()
{
	char i,j,k;
	
	for(i='E'; i>='A'; i--)
	{
		for(k='E'; k>i; k--)
		{
			printf("  ");
		}
		for(j='A'; j<=i; j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	
	return 0;
}