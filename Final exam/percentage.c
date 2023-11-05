//WAP to calculate student grades according to their percentage.

#include<stdio.h>

int main()
{
	int phy,cem,bio,com,math;
	float per;
	
	printf("marks : ");
	scanf("%d%d%d%d%d",&phy,&cem,&bio,&com,&math);
	
	per = (phy+cem+bio+com+math)/5.0;
	
	printf("\nPercentage : %0.2f\n",per);
	
	if(per>=90)	
	{
		printf("Gread : A\n");
		printf("Result : pass");
	}
	else if(per>=80)	
	{
		printf("Gread : B\n");
		printf("Result : pass");
	}
	else if(per>=70)	
	{
		printf("Gread : C\n");
		printf("Result : pass");
	}
	else if(per>=60)	
	{
		printf("Gread : D\n");
		printf("Result : pass");
	}
	else if(per>=50)	
	{
		printf("Gread : E\n");
		printf("Result : pass");
	}
	else if(per<50)	
	{
		printf("Gread : F\n");
		printf("Result : Fail");
	}
	
	return 0;
}