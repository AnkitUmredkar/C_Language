//4. Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA)
//Ex. Base Salary: 100 RS, HRA=10, DA=5, TA=8.
//Ans = 123 RS

#include<stdio.h>

int main()
{
	int s,ans,HRA,DA,TA;
	
	printf("Enter the base salary : ");
	scanf("%d",&s);
	
	HRA= s * 10/100;
	DA = s * 5/100;
	TA = s * 8/100;
	
	ans = s + HRA + DA + TA;
	
	printf("\nHRA = %d\n",HRA);
	printf("DA = %d\n",DA);
	printf("TA = %d\n",TA);
	printf("\nThe final gross salary is : %d",ans);
	
	return 0;
}