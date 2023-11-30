//  * * * * *
//      *
//      *
//      *
//      *
//      *
//  *   *
//    *

#include<stdio.h> 

int main()
{	
	int i,j;
	
	for(i=1; i<=8; i++)
	{
		for(j=1; j<=6; j++)
		{
			if(i==1 && (j!=1) || (j==4 && i!=8) || (i==8 && j==3) || (i==7 && j==2))
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