//WAPto find a minimum number out of 4 by using nested if else

#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("enter value ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				printf("a");	
			}
			else
			{
				printf("b");
			}
		}
		else
		{
			if(c<d)
			{
				printf("c");
			}
			else
			{
				printf("d");
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				printf("b");
			}
			else
			{
				printf("d");
			}
		}
		else
		{
			if(c<d)
			{
				printf("c");
			}
			else
			{
				printf("d");
			}
		}
	}
}