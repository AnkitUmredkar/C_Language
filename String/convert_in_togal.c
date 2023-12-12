//5. WAP to convert given string in Toggal Case.

#include<stdio.h>

int main()
{
	char a[100];
	int i;
	
	printf("Enter The string you want : ");
	scanf("%s",&a);
	
	for(i=0; i<=100; i++)
	{
		if(a[i]>='a' && a[0]<='z')
		{
			a[0] = a[0] - 32;
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i] = a[i] + 32;
		}
	}
	
	printf("\nThe string in Toggal Case is : %s",a);
	
 	return 0;
}
