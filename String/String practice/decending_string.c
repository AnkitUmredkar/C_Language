//Write a C program to sort a string array in ascending order.(decending)

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int len,i,j,temp;
	
	printf("Enter the string : ");
	gets(a);
	
	len = strlen(a);
	
	for(i=0; i<len; i++)
	{
		for(int j=i+1; j<len; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(i=0; i<len; i++)
	{
		printf("%c",a[i]);
	}
	
	
 	return 0;
}
