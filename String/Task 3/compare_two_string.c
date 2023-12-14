//2. WAP compares two strings.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50],b[50];
	int i,j,len1,len2,check=0;
	
	printf("Enter the first string : ");
	gets(a);
	
	printf("Enter the second string : ");
	gets(b);
	
	for(i=0; a[i]!='\0' && b[i]!='\0'; i++)
	{
		if(a[i] != b[i])
		{
			check = 1;
		}
	}
	
	if(check == 0)
	{
		printf("\nYes, Both string are equal");
	}
	else
	{
		printf("\nNo, Both string are not equal");
	}
	
	return 0;
}