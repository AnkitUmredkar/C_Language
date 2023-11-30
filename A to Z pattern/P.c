//* * * * *
//*
//*
//* * * * *
//*
//*
//*

#include<stdio.h>

int main()
{	
	int i,j,k;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 || i==1 || i==4)
			{
				printf("* ");
			}
			 
			for(k=i; k<=2; k++)
			{
				if(i==2 || i==3)
				{
					printf("    *");
				}
			}
		}
		printf("\n");
	}
	
 	return 0;
}
