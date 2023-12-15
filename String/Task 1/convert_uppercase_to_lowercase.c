//1. WAP to convert given string in lowercase.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	int len,i;
	
	printf("Enter The string you want in uppercase : ");
	gets(a);
	
	len = strlen(a);
	
	for(i=0; i<len; i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i] = a[i] + 32;
		}
	}
	
	printf("\nThe lowercase of entered string is : %s",a);
	
	return 0;
}
