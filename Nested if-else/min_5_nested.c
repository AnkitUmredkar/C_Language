//4. WAP to Find min. from given 5 no. using nested if else.

#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	printf("Enter the value of d : ");
	scanf("%d",&d);
	
	printf("Enter the value of e : ");
	scanf("%d",&e);
	
	//a,b,c,d,e
	if(a<b)
	{
		//a,c,d,e
		if(a<c)
		{
			//a,d,e
			if(a<d)
			{
				//a,e
				if(a<e)
				{
					printf("a is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}	
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				//c,e
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
	}
	else
	{
		//b,c,d,e
		if(b<c)
		{
			//b,d,e
			if(b<d)
			{
				//b,e
				if(b<e)
				{
					printf("b is minimum");
				}
				else
				{
					printf("e is minimum");
				}	
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
				
			}
		}
		else
		{
			//c,d,e
			if(c<d)
			{
				//c,e
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
				//d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
	}
	
	return 0;
}
