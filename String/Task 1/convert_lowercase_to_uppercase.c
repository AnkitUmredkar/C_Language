//2. WAP to convert given string in uppercase.

#include<stdio.h>

int main()
{
	char a[100];
	int len = 0,i;
	
	printf("Enter The string you want in lowercase : ");
	gets(a);
	
	for(i=0; i<100; i++)
	{
		if(a[i]>='a' && a[i]<='z' )
		{
			a[i] = a[i] - 32;
		}
	}
	
	printf("\nThe uppercase of entered string is : %s",a);
	
	return 0;
}
