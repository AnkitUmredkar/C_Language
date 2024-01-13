//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
//
//Test Data :
//Input the string : This Is A Test String.
//
//Expected Output :
//
//The given sentence is   : This Is A Test String.
//After Case changed the string  is: tHIS iS a tEST sTRING.

#include<stdio.h>
#include<string.h>
	
int main()
{
	char a[100];
	int len,i,j;
		
	printf("Enter The string you want : ");
	gets(a);
		
	len = strlen(a);
	
	if(a[0]>='A' && a[0]<='Z')
	{
		a[0] = a[0] + 32;
	}
	
	for(i=1; i<len; i++)
	{
		if(a[i-1] == ' ')
		{
			if(a[0]>='A' && a[0]<='Z')
			{
				a[0] = a[0] + 32;
			}
		}
		else if(a[i]>='a' && a[i]<='z')
		{
			a[i] = a[i] - 32;
		}
		else if(a[i]==' ')
		{
			if(a[i+1]>='A' && a[i+1]<='Z')
			{
				a[i+1] = a[i+1] + 32;
			}	
		}
	}
	
	printf("\n %s",a);
		
	return 0;
}