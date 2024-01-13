#include<stdio.h>
#include<string.h>

int main()
{
	char a[50],b[50];
	int len,result;
	
	printf("Enter the first string : ");
	gets(a);
	
	printf("Enter the second string : ");
	gets(b);
	
	result = strcmp(b,a);
	
	if(result == 1)
	{
		printf("\nEntered two string are not equel");
	}
	else if(result < 0)
	{
		printf("\nfirst string is less than the second string");
	} 
	else
	{
		printf("\nEntered two string are equel");
	}
	
 	return 0;
}
