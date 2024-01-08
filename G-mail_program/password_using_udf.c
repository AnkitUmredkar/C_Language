//password valid or not

#include<stdio.h>
#include<string.h>

int checkspachar(char a[])
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
		return 1;
	}
	else
	{
		return 0;
	}
}

int checkspace(char a[])
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
		return 1;
	}
	else
	{
		return 0;
	}
	checkspachar(a);
}

int checksmall(char a[])
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
		return 1;
	}
	else
	{
		return 0;
	}
	checkspace(a);
}

int checkcapital(char a[])
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
		return 1;
	}
	else
	{
		return 0;
	}
	checksmall(a);
}

int checklength(char a[])
{
	int len = strlen(a);
	
	if(len>=8 && len<=32)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	checkcapital(a);
}

int input()
{
	char a[50];
	int len = strlen(a),n;
	
	printf("Enter the password you want : ");
	gets(a);
	
	n = checklength(a) + checkcapital(a) + checksmall(a) + checkspace(a) + checkspachar(a);
	return n;
}

int main()
{
	int x;
	
	start:
		
	x = input();
	
	if(x == 5)
	{
		printf("\nThe password is correct");
	}
	else
	{
		printf("\nThe password is not correct!!Enter again \n\n");
		goto start;
	}
		
	
 	return 0;
}
