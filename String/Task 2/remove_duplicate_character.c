//4. Write a c program to remove all repeated charcters in a string.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int i=0,j,len,k;
	
	printf("Enter the string : ");
	gets(a);
    
	len = strlen(a);
	
	printf("\nAfter remove all duplicate charcters : ");
	
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(a[i] == a[j])
			{
				a[j] = 0;
			}
		}
		if(a[i] != 0)
		{
			printf("%c",a[i]);
		}
	}

 	return 0;
}
