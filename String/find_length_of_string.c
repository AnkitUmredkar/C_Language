//3. WAP to given string length

#include<stdio.h>

int main()
{
	char a[100];
	int i = 0;
	
	printf("Enter The string you want : ");
	scanf("%s",&a);
	
	while(a[i] != '\0') 
	{
		i++;
}
	
	printf("\nThe length of string is : %d",i);
	
	return 0;
}

//#include<stdio.h>
//
//void main()
//{
//	char a[]="Praful Patnecha";
//	int l=sizeof(a)/sizeof(a[0])-1;
//	printf("String Length : %d",l);
//}