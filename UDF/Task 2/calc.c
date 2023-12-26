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

float calculator()
{
	char op;
 	float a,b;
 	st:
 		if(op!='0')
 		{
 			
	while(1)
	{
	printf("\n\nEnter the operator(+,-,*,/) : ");
	scanf(" %c",&op);
	 	if(op=='0')
	 	{
	 		goto st;
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
		 }
	



int main()
{
 		calculator();
 	
 	return 0;
}
