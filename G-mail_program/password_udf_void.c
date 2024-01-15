//password valid or not

#include<stdio.h>
#include<string.h>

void checkspachar(char a[])
{
	int i,check;
	int len = strlen(a);
	check = 0;
	
	for(i=0; i<len; i++)
	{
		if(a[i]>=32 && a[i]<=47 || a[i]>=58 && a[i]<=64 || a[i]>=91 && a[i]<=96 || a[i]>=123 && a[i]<=126)
		{
			check = 1;
		}
	}
	
	if(check == 1)
	{
		printf("\nThe password is correct");
	}
	else
	{
		printf("The password is not correct enter must one special character");
		input();
	}
}

void checkspace(char a[])
{
	int i,check;
	int len = strlen(a);
	check = 0;
	
	for(i=0; i<len; i++)
	{
		if(a[i] == ' ')
		{
			check = 1;
		}
	}
	
	if(check == 0)
	{
		checkspachar(a);
	}
	else
	{
		printf("The password is wrong because space is not allow !!");
		input();
	}
}

void checkdigit(char a[])
{
	int i,check;
	int len = strlen(a);
	check = 0;
	
	for(i=0; i<len; i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			check = 1;
		}
	}
	
	if(check == 1)
	{
		checkspace(a);
	}
	else
	{
		printf("The password is wrong because minimum 1 character must be digit !!");
		input();
	}
}

void checksmall(char a[])
{
	int i,check;
	int len = strlen(a);
	check = 0;
	
	for(i=0; i<len; i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			check = 1;
		}
	}
	
	if(check == 1)
	{
		checkdigit(a);
	}
	else
	{
		printf("The password is wrong because minimum 1 character is need small !!");
		input();
	}
}

void checkcapital(char a[])
{
	int i,check;
	int len = strlen(a);
	check = 0;
	
	for(i=0; i<len; i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			check = 1;
		}
	}
	
	if(check == 1)
	{
		checksmall(a);
	}
	else
	{
		printf("The password is wrong because minimum 1 character is need capital !!");
		input();
	}
}

void checklength(char a[])
{
	int len = strlen(a);
	
	if(len>=8 && len<=32)
	{
		checkcapital(a);
	}
	else
	{
		printf("please enter password which length between 8 to 32 !!");
		input();
	}
}

void input()
{
	char a[50];
	int len = strlen(a),n;
	
	printf("\n\nEnter the password you want : ");
	gets(a);
	
	checklength(a);
}

int main()
{
	input();

 	return 0;
}
