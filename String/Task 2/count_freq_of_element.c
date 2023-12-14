//1.wap to count frequency of each charcter in a string.

#include<stdio.h>
#include<string.h>

int main()
{
	char name[50];
	int i,j,f=1;
	int length;
	
	printf("Enter the string you want : ");
	gets(name);
	
	length = strlen(name);
	
	for(i=0; i<length; i++)
	{
		for(j=i+1; j<length; j++)
		{
			if(name[i] == name[j])
			{
				f++;
				name[j] = 0;
			}
		}
		if(name[i] != 0)
		{
			printf("%c --> %d\n",name[i],f);
		}
		f=1;
	}
	
	return 0;
}
