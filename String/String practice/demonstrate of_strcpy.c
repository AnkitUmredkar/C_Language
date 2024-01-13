#include<stdio.h>
#include<string.h>

int main()
{
	char a[50],b[50];
	
	printf("Enter the first string : ");
	gets(a);
	
	strcpy(b,a);//b(first) --> target , a(second) --> source
	
	printf("\nThe orignal string is : %s",a);
	printf("\nThe copied string is : %s",b);
	
 	return 0;
}
