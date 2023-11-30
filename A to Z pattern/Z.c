//* * * * *
//      *
//     *
//    *
//   *
//  *
//* * * * *

#include<stdio.h>

int main()
{
	int i,j,k;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==1 || i==7)
			{
				printf("* ");
			}
			else if(j==1)
			{
				for(k=i; k<7; k++)
				{
					printf(" ");
				}
				printf(" *");
			}		
		}
		
		printf("\n");
	}
	
 	return 0;
}
