//3. Write a c program to remove spaces,blanks from a string.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int i=0,j,k;
	
	printf("Enter the string : ");
	gets(a);
		
	j = strlen(a);
	
	for(i=0; i<j; i++)
	{
		if(a[i] == ' ')
		{
			for(k=i; k<j; k++) 
			{
				a[k] = a[k+1];
			}
			i--;
		}
	}
	
	printf("%s",a);

	
 	return 0;
}

