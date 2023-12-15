//3. Count No. of digits, alphabets & and special characters.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int i,len,digit=0,alphabet=0,spe_char=0;
	
	printf("Enter the string : ");
	gets(a);
	
	len = strlen(a);
	
	for(i=0; i<len; i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
		{
			digit++;
		}
		else if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
		{
			alphabet++;
		}
		else
		{
			spe_char++;
		}
	}
	
	printf("\nThe number of digit is : %d",digit);
	printf("\nThe number of alphabet is : %d",alphabet);
	printf("\nThe number of special character is : %d",spe_char);
	
 	return 0;
}
