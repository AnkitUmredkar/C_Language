//3. WAP to given string length

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100];
	int i = 0;
	
	printf("Enter The string you want : ");
	scanf("%s",&a);
	
	while(a[i] != '\0') 
	{
		i++;
}
	
	printf("\nThe length of string is : %d",i);
	
	return 0;
}