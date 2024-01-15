#include<stdio.h>
#include<string.h>

int checkgmail(char a[])
{
	char b[10]= "@gmail.com";
	int len = strlen(a);
	int l= len - 10;
	int i,check,c=0;
	check=0;
	
	for(i=l; i<len; i++)
	{
		if(a[i] != b[c])
		{
			check = 1;
		}
		c++;
	}
	if(check == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int checkspechar(char a[])
{
	int len = strlen(a);
	int i,check;
	check=0;
	for(i=0; i<len; i++)
	{
		if(a[i]>=32 && a[i]<=45 || a[i]==47 || a[i]>=58 && a[i]<=63 || a[i]>=91 && a[i]<=96 || a[i]>=123 && a[i]<=126)
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
	checkgmail(a);
}

int checksmall(char a[])
{
	int check,i;
	int len = strlen(a);
	check=0;
	for(i=0; i<len; i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			check=1;
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
	checkspechar(a);
}

int checklength(char a[])
{
	int x;
	int len = strlen(a);
	if(len>=11 && len<=30)
	{
		return 1;
	}
	else
	{
		
		return 0;
	}
	
	checksmall(a);
	
}

int input()
{
	char a[50];
	int i,len,l,check=0,c=0;
	
	printf("\n\nEnter the gmail id you want : ");
	gets(a);
	
	int n = checklength(a)+checksmall(a)+checkspechar(a)+checkgmail(a);
	return n;
}

int main()
{
	
	int n;
	start:
	n = input();
	
	if(n==4)
	{
		printf("\nYes Entered gmail is valid");
	}
	else
	{
		printf("\nNo,Entered gmail id is not valid");
		goto start;
	}

 	return 0;
}