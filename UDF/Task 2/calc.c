#include<stdio.h>

void sum(float a,float b)
{
	printf("%0.2f + %0.2f = %0.2f",a,b,a+b);
}

void substraction(float a,float b)
{
	printf("%0.2f - %0.2f = %0.2f",a,b,a-b);
}

void multiplication(float a,float b)
{
	printf("%0.2f * %0.2f = %0.2f",a,b,a*b);
}

void division(float a,float b)
{
	printf("%0.2f / %0.2f = %0.2f",a,b,a/b);
}

	
	
int main()
{
 	char op;
 	float a,b;
 	
 	printf("If you want to stop calc then press : 0, in operator input\n");
 	
 	start:
 	if(op!='0')
 	{
 			
		while(1)
		{
			printf("\n\nEnter the operator(+,-,*,/) : ");
			scanf(" %c",&op);
			
			if(op=='0')
			{
			 	goto start;
			}
			
			printf("Enter the first value a : ");
			scanf("%f",&a);
			 	
			printf("Enter the first value b : ");
			scanf("%f",&b);
			 	
			switch(op)
		 	{
			 	case '+' : sum(a,b);
					break;
					
			 	case '-' : substraction(a,b);
					break;
					
				case '*' : multiplication(a,b);
					break;
					
				case '/' : division(a,b);
					break;
					
				default : printf("You Enter unvalid operator, so it can't process"); 
						
			}
		}
	}
	
	return 0;
}
 	
 
