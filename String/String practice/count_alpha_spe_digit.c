#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int c_dig=0,c_alpha=0,c_spe=0;
	
	printf("Enter the string : ");
	gets(a);
	
	int len = strlen(a);
	
	for(int i=0; i<len; i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			c_dig++;
		}
		else if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
		{
			c_alpha++;
		}
		else
		{
			c_spe++;
		}
	}
	
	printf("\nAlphabets : %d",c_alpha);
	printf("\nDigit : %d",c_dig);
	printf("\nSpecial char : %d",c_spe);
	
 	return 0;
}
