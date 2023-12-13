//3. WAP to given string length

#include<stdio.h>

int main()
{
	char a[100];
	int i = 0;
	
	printf("Enter The string you want : ");
	gets(a);
	
	while(a[i] != '\0') 
	{
		i++;
	}
	
	printf("\nThe length of string is : %d",i-1);
	
	return 0;
}
