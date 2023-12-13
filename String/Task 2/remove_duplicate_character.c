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
	
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(a[i] == a[j])
			{
				for(k=j; k<len; k++)
				{
					a[k] = a[k+1];
				}
			}
		}
	}
	
	
	printf("\nAfter remove all duplicate charcters : \n%s",a);

	
 	return 0;
}