//1. WAP to convert given string in lowercase.

#include<stdio.h>

int main()
{
	char a[100];
	int len = 0,i;
	
	printf("Enter The string you want in uppercase : ");
	scanf("%s",&a);
	
	for(i=0; i<100; i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i] = a[i] + 32;
		}
	}
	
	printf("\nThe lowercase of entered string is : %s",a);
	
	return 0;
}