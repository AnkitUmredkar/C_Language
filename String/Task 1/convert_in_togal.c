//5. WAP to convert given string in Toggal Case.

#include<stdio.h>
#include<stdio.h>

int main()
{
	char str[50];
	int i=0,len;
	
	printf("Enter the string you want : ");
	gets(str);
	
	len = strlen(str);
	
	if(str[0]>='a' && str[0]<='z')
	{
		str[0] = str[0] - 32;
	}
	
	for(i=1; i<=len; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i] = str[i] + 32;
		}
	}
	
	printf("\nThe string in Toggal Case is : %s",str);
	
 	return 0;
}
