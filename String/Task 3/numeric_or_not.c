//5. WAP check string is numeric or not

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
		if(a[i] >= '0' && a[i] <= '9')
		{
			check = 1;
			break;
		}
	}
	
	if(check == 1)
	{
		printf("\nYes, Entered string is numeric");
	}
	else
	{
		printf("\nNo, Entered string is not numeric");
	}
		
	return 0;
}