//1. WAP check string is palindrome or not.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int i,len,check=0;
	
	printf("Enter the string : ");
	gets(a);
	
	len = strlen(a);
	
	for(i=0; i<len; i++)
	{
		if(a[i] != a[len-i-1])
		{
			check = 1;
		}
	}
	
	if(check == 0)
	{
		printf("\nYes,The entered string is not palindrom");
	}
	else
	{
		printf("\nNo,The entered string is palindrom");
	}
	
 	return 0;
}
