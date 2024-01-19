#include<stdio.h>
#include<string.h>

void checkgmail(char a[],FILE *gmail)
{
	char b[10] = "@gmail.com";
	int i,len,check,l,c=0;
	len = strlen(a);
	l = len - 10;
	
	check = 0;
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
		printf("Yes,Entered gmail is valid");
		fprintf(gmail,"\n%s\n",a);
		inputp(gmail);
	}
	else
	{
		printf("Please,check the @gmail.com!!");
		inputg();
	}
}

void checkspc_spcchar(char a[],FILE *gmail)
{
	int i,len,check;
	len = strlen(a);
	
	check=0;
	for(i=0; i<len; i++)
	{
		if(a[i]>=32 && a[i] <=45 || a[i]==47 || a[i]>=58 && a[i]<=63 || a[i]>=91 && a[i]<=96 || a[i]>=123 && a[i]<=126)
		{
			check = 1;
		}
	}
	if(check == 0)
	{
		checkgmail(a,gmail);
	}
	else
	{
		printf("Space and special character does nit allow!!");
		inputg();
	}
}

void checksmall(char a[],FILE *gmail)
{
	int i,len,check;
	len = strlen(a);
	
	check=0;
	for(i=0; i<len; i++)
	{
		if(a[i] >='A' && a[i] <='Z')
		{
			check = 1;
		}
	}
	if(check == 0)
	{
		checkspc_spcchar(a,gmail);
	}
	else
	{
		printf("Enter the gmail id in small letter!!");
		inputg();
	}
}

void checklength(char a[],FILE *gmail)
{
	int i,len,check;
	len = strlen(a);
	
	check=0;
	if(len>=12 && len<=38)
	{
		check = 1;
	}
	if(check == 1)
	{
		checksmall(a,gmail);
	}
	else
	{
		printf("Enter the gmail which length between 12 to 38!!");
		inputg();
	}
}

int inputg(FILE *gmail)
{
	char a[50];
	
	printf("\n\nEnter the gmail id : ");
	gets(a);
	
	checklength(a,gmail);
}
//----------------------------------------------password----------------------------------------//
void checkspachar(char a[],FILE *gmail)
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
		printf("The password is correct");
		fprintf(gmail,"\n%s",a);
	}
	else
	{
		printf("The password is not correct enter must one special character");
		inputp();
	}
}

void checkspace(char a[],FILE *gmail)
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
		checkspachar(a,gmail);
	}
	else
	{
		printf("The password is wrong because space is not allow !!");
		inputp();
	}
}

void checkdigit(char a[],FILE *gmail)
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
		checkspace(a,gmail);
	}
	else
	{
		printf("The password is wrong because minimum 1 character must be digit !!");
		inputp();
	}
}

void checksmallp(char a[],FILE *gmail)
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
		checkdigit(a,gmail);
	}
	else
	{
		printf("The password is wrong because minimum 1 character is need small !!");
		inputp();
	}
}

void checkcapital(char a[],FILE *gmail)
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
		checksmallp(a,gmail);
	}
	else
	{
		printf("The password is wrong because minimum 1 character is need capital !!");
		inputp();
	}
}

void checklengthp(char a[],FILE *gmail)
{
	int len = strlen(a);
	
	if(len>=8 && len<=32)
	{
		checkcapital(a,gmail);
	}
	else
	{
		printf("please enter password which length between 8 to 32 !!");
		inputp();
	}
}

void inputp(FILE *gmail)
{
	char a[50];
	int len = strlen(a),n;
	
	printf("\n\nEnter the password you want : ");
	gets(a);
	
	checklengthp(a,gmail);
}
int main()
{
	FILE *gmail = fopen("Gmail.txt","w");
	
	inputg(gmail);
	
	
	return 0;
}
 
