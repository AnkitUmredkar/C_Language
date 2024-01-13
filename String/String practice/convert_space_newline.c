// Write a program in C to split strings by space into words.Write a program in C to count the number of punctuation characters present in a string.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int len,i,j,check;
	
	printf("Enter the string : ");
	gets(a);
	
	len = strlen(a);
	check = 0;
	for(i=0; i<len; i++)
	{
		if(a[i] ==' ')
		{
			a[i] = '\n';
		}
	}
	
	printf("\n%s",a);
	
 	return 0;
}
