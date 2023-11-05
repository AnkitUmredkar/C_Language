//length of string

#include<stdio.h>

int strlen(char str[],int n)
{
	int length=0;
	
	while(str[length] != '\0')
	{
		length++;
	}
	return length;
}

int main()
{
	int n,i,length;
	int str[100];
	
	printf("Enter the string : ");
	scanf("%s",&str);
	
	length = strlen(str,n);
	
	printf("length = %d",length);
	
	return 0;
}