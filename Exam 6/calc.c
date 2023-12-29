#include<stdio.h>

void sum(float a,float b)
{
	printf("%.2f + %.2f = %.2f",a,b,a+b);
}

void substraction(float a,float b)
{
	printf("%.2f - %.2f = %.2f",a,b,a-b);
}

void multiplication(float a,float b)
{
	printf("%.2f * %.2f = %.2f",a,b,a*b);
}

void division(float a,float b)
{
	printf("%.2f / %.2f = %.2f",a,b,a/b);
}

void modulus(int a,int b)
{
	printf("%d %% %d = %d",a,b,a%b);
}

int main()
{
 	int op;
 	float a,b;
 	
 	printf("Press 1 for +\n");
 	printf("Press 2 for -\n");
 	printf("Press 3 for *\n");
 	printf("Press 4 for /\n");
 	printf("Press 5 for %\n");
 	printf("Press 0 for the exit\n");
 	
 	
 	while(1)
 	{
 		printf("\n\nEnter your choise(+,-,*,/) : ");
		scanf(" %d",&op);
	 	
	 	if(op == 0)
	 	{
	 		break ;
	 	}
			
		printf("Enter the first value a : ");
		scanf("%f",&a);
			 	
		printf("Enter the first value b : ");
		scanf("%f",&b);
				 	
		switch(op)
		{
			case 1 : sum(a,b);
				break;
						
			case 2 : substraction(a,b);
				break;
					
			case 3 : multiplication(a,b);
				break;
						
			case 4 : division(a,b);
				break;
				
			case 5 : modulus(a,b);
				break;
				
			default : printf("You Enter unvalid operator, so it can't process"); 		
		}	
	}
	
	return 0;
}
