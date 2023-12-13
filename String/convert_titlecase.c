//6. WAP to convert given string in Title Case.

#include<stdio.h>

int main()
{
	char str[100];
	int i=0;
	
	printf("Enter the string you want : ");
	gets(str);
	
	if(str[0]>=97 && str[0]<=122)
	{
		str[0] = str[0] - 32;
	}
	
	for(i=1; i<=100; i++)
	{
		if(str[i-1] == 32)
		{
			if(str[i]>=97 && str[i]<=122)
			{
				str[i] = str[i] - 32;
			}
		}
		else if(str[i]>=65 && str[i]<=97)
		{
			str[i] = str[i] + 32;
		}
		else if(str[i] == 32)
		{
			if(str[i]>=97 && str[i]<=122)
			{
				str[i+1] = str[i+1] - 32;
			}
		}
	}
	
	printf("\nThe string in Toggal Case is : %s",str);
	
 	return 0;
}
