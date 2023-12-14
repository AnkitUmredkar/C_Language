//3. Write a c program to remove spaces,blanks from a string.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int i,j,len,check=0;
	
	printf("Enter the string : ");
	gets(a);
		
	len = strlen(a);
	
	for(i=0; i<len; i++)
	{
		for(j=0; j<len; j++)
		{
			if(a[j] == ' ')
			{
				check = 1;
			}
			if(check == 1)
			{
				a[j] = a[j+1];
			}
		}
		check = 0;
	}
		
	printf("\nAfter remove all spaces in string : ");
	printf("%s",a);

	
 	return 0;
}

