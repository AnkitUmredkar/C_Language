//  * * *
//*       *
//*       *
//*       *
//*   *   *
//*     * *
//*       *
//  * * *   *

#include<stdio.h> 

int main()
{	
	int i,j;
	
	for(i=1; i<=8; i++)
	{
		for(j=1; j<=6; j++)
		{
			if((i==1 && j!=1 && j!=5 && j!=6) || (j==1 && i!=1 && i!=8) || (i==8 && j!=1 && j!=5) || (j==5 && i!=1 && i!=8) || (i==5 && j==3) || (i==6 && j==4) || (i==7 && j==5))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
 	return 0;
}