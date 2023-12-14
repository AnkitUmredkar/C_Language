//4. Copy one string into another

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50],b[50];
	int i,len,check=0;
	
	printf("Enter the string : ");
	gets(a);
	
	len = strlen(a);
	
	for(i=0; i<len; i++)
	{
		 b[i] = a[i];
	}
	
	printf("\nThe orignal string which store in a : %s",a);
	printf("\n\nThe copied string is which store in b : %s",b);
		
	return 0;
}