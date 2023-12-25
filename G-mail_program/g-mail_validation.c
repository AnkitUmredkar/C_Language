#include<stdio.>
#include<string.h>

int main()
{
	char b[10]= "@gmail.com";
	char a[50];
	int i,len,l,check=0,c=0;
	
	start:
	printf("\n\nEnter the gmail id you want : ");
	gets(a);
	
	len = strlen(a);
	l= len - 10;
	
	if(len>=6 && len<=30)
	{
		check=0;
		for(i=0; i<len; i++)
		{
			if(a[i]>='A' && a[i]<='Z')
			{
				check=1;
			}
		}
		if(check==0)
		{
			check=0;
			for(i=0; i<len; i++)
			{
				if(a[i]>=32 && a[i]<=45 || a[i]==47 || a[i]>=58 && a[i]<=63 || a[i]>=91 && a[i]<=96 || a[i]>=123 && a[i]<=126)
				{
					check = 1;
				}
			}
			if(check==0)
			{
				check=0;
				for(i=l; i<len; i++)
				{
					if(a[i] == b[c])
					{
						c++;
					}
					
				}
				if(c==10)
				{
					printf("Yes,entered gmail id is valid");
				}
				else
				{
					printf("Service provider name is not perfact!");
					goto start;
				}
			}
			else
			{
				printf("Space and special character does not allow!");
				goto start;
			}
		}
		else
		{
			printf("Enter your gmail id in small letter!");
			goto start;
		}
	}
	else
	{
		printf("Enter the gmail which length between 6 to 30!");
		goto start;
	}          

 	return 0;
}
