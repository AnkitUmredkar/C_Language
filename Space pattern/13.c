//        A
//      B A
//    C B A
//  D C B A
//E D C B A

#include<stdio.h>

int main()
{
	char i,j,k;
	
	for(i='A'; i<='E'; i++)
	{
		for(k='E'; k>i; k--)
		{
			printf("  ");
		}
		for(j=i; j>='A'; j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	
	return 0;
}