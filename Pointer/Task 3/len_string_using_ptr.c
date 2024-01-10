//1.Write a Program to find the length of a string using a Pointer.

#include<stdio.h>

int main()
{
 	char a[50];
 	
 	printf("Enter the string you want : ");
 	gets(a);
     
	char *ptr = &a[0];
	int len=0;

	while(*ptr != '\0')
	{
		len++;
		ptr++;
	}
	
	printf("\nThe length of string is : %d",len); 
	 	
 	return 0;
}
