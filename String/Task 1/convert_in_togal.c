//5. WAP to convert given string in Toggal Case.

#include<stdio.h>

int main()
{
	char str[100];
	int i;
	
	printf("Enter the string you want : ");
	gets(str);
	
	for(i=0; i<=100; i++)
	{
		if(str[0]>=97 && str[0]<=122)
		{
			str[0] = str[0] - 32;
		}
		else if(i != 0 && str[i]>=65 && str[i]<=90)
		{
			str[i] = str[i] + 32;
		}
	}
	
	printf("\nThe string in Toggal Case is : %s",str);
	
 	return 0;
}
