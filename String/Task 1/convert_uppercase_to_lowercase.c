//1. WAP to convert given string in lowercase.

#include<stdio.h>

int main()
{
	char a[100];
	int len = 0,i;
	
	printf("Enter The string you want in uppercase : ");
	gets(a);
	
	for(i=0; i<100; i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i] = a[i] + 32;
		}
	}
	
	printf("\nThe lowercase of entered string is : %s",a);
	
	return 0;
}
