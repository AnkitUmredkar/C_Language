#include<stdio.h>
#include<string.h>

int main()
{
	char a[50],b[50];
	
	printf("Enter the first string : ");
	gets(a);
	
	printf("Enter the second string : ");
	gets(b);
	
	strcat(a,b);//b(first) --> target , a(second) --> source
	
	printf("\nThe orignal string is : %s",a);
	
 	return 0;
}