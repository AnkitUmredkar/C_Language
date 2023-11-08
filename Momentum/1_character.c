//1.Write C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>

int main()
{
	int ch;
	
	printf("Enter any charcter you want : ");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	{
		printf("You entered alphabet");
	}
	else if(ch >= '0' && ch <= '9')
	{
		printf("You enterd digit");
	}
	else
	{
		printf("You entered special character");
	}
	
	return 0;
}