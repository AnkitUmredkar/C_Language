//1. WAP to convert given string in uppercase.
	
#include<stdio.h>
#include<string.h>
	
int main()
{
	char a[100];
	int len,i;
		
	printf("Enter The string you want : ");
	gets(a);
		
	len = strlen(a);
		
	for(i=0; i<len; i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i] = a[i] - 32;
		}
	}
		
	printf("\nThe uppercase of entered string is : %s",a);
		
	return 0;
}
