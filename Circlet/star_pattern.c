//      *
//    *   *
//  *       *
//*           *

#include<stdio.h>

int main()
{
	int i,j;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=7; j++)
		{
			if((i==1 && j==4) || (i==2 && (j==3 || j==5)) || (i==3 && (j==2 || j==6)) || (i==4 && (j==1 || j==7))) 
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
