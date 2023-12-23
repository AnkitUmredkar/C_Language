//3. Count No. of digits, alphabets & and special characters.

#include<stdio.h>
#include<string.h>

int main()
{
	int len,i,j=0;
 	char a[50],b[50];
 	
 	printf("Enter the first string : ");
 	gets(a);
 	
// 	printf("Enter the second string : ");
// 	gets(b);
	
	int choise;
	
	printf("Enter choise : ");
	scanf("%c",&choise);

 	len = strlen(a);
 	
 	int check=0;
 	
	for(i=0; i<len; i++)
	{
		if(choise == a[i])
		{
			j++;
		}
	}
	
	printf("%c is %d times",choise,j);

	return 0;
}

	
 	
 
#include<stdio.h>

int main()
{
 	int
 	return 0;
}
