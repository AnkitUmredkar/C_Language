//3. Write a c program to remove spaces,blanks from a string.

#include<stdio.h>
#include<string.h>

int main()
{
	int len,i,j;
 	char a[50];
 	
 	printf("Enter the string : ");
 	gets(a);
 	
 	len = strlen(a);
 	
 	for(i=0; i<len; i++)
 	{
 		if(a[i]==32)
		{
			for(j=i+1; j<len; j++)
			{
				a[j-1] = a[j];
			}
			i--;
			len--;
		}
	}
	
	for(i=0; i<len; i++)
	{
		printf("%c",a[i]);
	}
	
	return 0;
}

