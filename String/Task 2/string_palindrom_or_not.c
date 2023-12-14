//2. Write a c program to check whether a string is palindrom or not.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int i=0,j,check=0;
	
	printf("Enter the string : ");
	gets(a);
		
	j = strlen(a);
	
	for(i=0; i<j; i++)
	{
		if(a[i] != a[j-i-1])
		{
			check = 1;
		}
	}
	
	if(check == 0)
	{
		printf("\nYes, Entered number is palindrom");
	}
	else
	{
		printf("\nNo, Entered number is not palindrom");
	}
	
 	return 0;
}
