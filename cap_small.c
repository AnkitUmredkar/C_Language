//WAPto find a minimum number out of 4 by using nested if else

#include<stdio.h>

int main()
{
	char a;
	
	printf("enter char ");
	scanf("%c",&a);
	
	if(a>='a' && a<='z')
	{
		printf("small");
	}
	else if(a >='A' && a <='Z')
	{
		printf("capital");
	}
	else
	{
		printf("no capital , no small");
	}

	return 0;
}
