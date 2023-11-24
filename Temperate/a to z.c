//1. Write C program to print all alphabets from a to z. using do while loop.

#include<stdio.h>

int main()
{
	char ch='a';
	
	do
	{
		printf("%c ",ch);
		ch++;
		
	}while(ch<='z');
	
	return 0;
}