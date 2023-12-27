//2 Write a Program to find the length of the String by passing a string as an argument using UDF.

#include<stdio.h>
#include<string.h>

int findlength(char a[])
{
	int len;
	
	len = strlen(a);
	
	return len;
}

int main()
{
 	
 	char a[50];
 	
 	printf("Enter the string : ");
 	gets(a);
 	
 	printf("\nThe length of string is : %d",findlength(a));
 	
 	return 0;
}
