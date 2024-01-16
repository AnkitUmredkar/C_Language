#include<stdio.h>

int main()
{
 	int i,j,k=1,a=1;

	
 	for(i=1; i<=10; i++)
 	{
 		for(int l=1; l<i; l++)
 		{
 			printf("  ");
		}
 		for(j=i; j<=10; j++)
		{
			printf("%d ",k);
			k = k + j;
			if(k>=1 && k<=9)
			{
				printf(" ");	
			} 	
		}
		for(j=9; j>=i; j--)
		{
			printf("%d ",k);
			k = k + j; 	
		}
		a+=i;
		k=a+i;	
		printf("\n");
	}
 	
 	return 0;
	
}
