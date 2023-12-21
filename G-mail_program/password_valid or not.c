//password valid or not

#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	int len,i,check=0;
	
	start:	
	printf("\n");
	printf("Enter the password you want : ");
	gets(a);
	
	len = strlen(a);
	
	if(len>=8 && len<=32)
	{
		for(i=0; i<len; i++)
		{
			if(a[i]>='A' && a[i]<='Z')
			{
				check = 1;
			}
		}
		if(check == 1)
		{
			check=0;
			for(i=0; i<len; i++)
			{
				if(a[i]>='a' && a[i]<='z')
				{
					check = 1;
				}
			}
			if(check == 1)
			{
				check=0;
				for(i=0; i<len; i++)
				{
					if(a[i]>='0' && a[i]<='9')
					{
						check = 1;
					}
				}
				if(check==1)
				{
					check=0;
					for(i=0; i<len; i++)
					{
						if(a[i] == ' ')
						{
							check = 1;
						}
					}
					if(check == 0)
					{
						check=0;
						//	32–47 / 58–64 / 91–96 / 123–126
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
							printf("\nThe password is not correct enter must one special character");
							goto start;
						}
					}
					else
					{
						printf("The password is wrong because space is not allow");
						goto start;
					}
				}
				else
				{
					printf("The password is wrong because minimum 1 character must be digit ");
					goto start;
				}
			}
			else
			{
				printf("The password is wrong because minimum 1 character is need small");
				goto start;
			}
		}
		else
		{
			printf("The password is wrong because minimum 1 character is need capital");
			goto start;
		}	
	}
	else
	{
		printf("please enter password which length between 8 to 32");
		goto start;
	}
	
 	return 0;
}
