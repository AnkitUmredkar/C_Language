#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int len,i,j,check=0;
	
	printf("Enter the string : ");
	gets(a);
	
	len = strlen(a);
	
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(a[i] == a[j])
			{
				a[j] = 0;
				a[i] = 0;
			}
		}
		if(a[i] != 0)
		{
			printf("%c",a[i]);
		}
		check = 0;
	}
	
	return 0;
}