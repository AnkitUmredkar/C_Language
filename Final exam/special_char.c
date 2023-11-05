//WAP to check character is the alphabet, number, or unique character.

#include<stdio.h>

int main()
{
	char n;
	
	printf("Enter the character : ");
	scanf("%c",&n);
	
	if(n >='1' && n <='9')
	{
		printf("Digit");
	}
	else if(n >= 'A' && n <= 'Z' || n >= 'a' && n <= 'z')
	{
		printf("alphabet");
	}
	else
	{
		printf("special char");
	}
	
	return 0;
}