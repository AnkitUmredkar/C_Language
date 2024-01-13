//check uppercase or not

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
		if(a[i]>='a' && a[i]<='z')
		{
			check = 1;
		}
	}
	
	if(check == 0)
	{
		printf("Entered string in uppercase");
	}
	else
	{
		printf("Entered string in lwrcase");
	}
	
 	return 0;
}
