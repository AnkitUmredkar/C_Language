//4. WAP to given string in reverse.

#include<stdio.h>

int main()
{
	char a[100];
	int len = 0,i;
	
	printf("Enter The string you want : ");
	gets(a);
	
	while(a[len] != '\0')
	{
		len++;
	}
	
	printf("\nThe reverse of string is : ");
	
	for(i=len-1; i>=0; i--)
	{
		printf("%c",a[i]);
	}
	
	return 0;
}