//1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.

#include<stdio.h>

int main()
{
 	int a,b = 70;
 	
 	FILE *fp1 = fopen("even_file.txt","w");
 	
 	fprintf(fp1,"Even numbers from even_file.txt : ");
 	
 	for(a=50; a<=b; a++)
 	{
 		if(a % 2 == 0)
		{
			fprintf(fp1, "%d ",a); 	
		}	
	}
	
	
	FILE *fp2 = fopen("odd_file.txt","w");

	fprintf(fp2,"Odd numbers from odd_file.txt : ");
	
	for(a=50; a<=b; a++)
 	{
 		if(a % 2 == 1)
		{
			fprintf(fp2,"%d ",a); 	
		}	
	}
 	
 	return 0;
}
