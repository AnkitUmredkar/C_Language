//wap to merged two string

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50],b[50],c[100];
	int len1,len2,i,j;
		
	printf("Enter The first string you want : ");
	gets(a);
	
	printf("Enter The second string you want : ");
	gets(b);
		
	len1 = strlen(a);
	len2 = strlen(b);
	
	for(i=0; i<len1; i++)
	{
		c[i] = a[i];
	}
	
	for(i=0; i<len2; i++)
	{
		c[len1+i] = b[i];
	}
	
	printf("\nThe merged string is : %s",c);
	
 	return 0;
}
