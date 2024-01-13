// Write a program in C to replace the spaces in a string with a specific character.

#include<stdio.h>
#include<string.h>

int main()
{
	char t,a[50];
	int len,i,j,check;
	
	printf("Enter the string : ");
	gets(a);
	
	len = strlen(a);
	
	printf("\nEnter the special character which you want to replace with space: ");
	scanf("%c",&t);
	
	check = 0;
	for(i=0; i<len; i++)
	{
		if(a[i] == ' ')
		{
			a[i] = t;
		}
	}
	
	printf("\n%s",a);
	
 	return 0;
}
