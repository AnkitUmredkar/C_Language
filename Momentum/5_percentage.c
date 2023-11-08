//5. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
//    Calculate the percentage and grade according to the following
//        Percentage >= 90% : Grade A
//        Percentage >= 80% : Grade B
//        Percentage >= 70% : Grade C
//        Percentage >= 60% : Grade D 
//        Percentage >= 50% : Grade E
//        Percentage >= 40% : Grade F

#include<stdio.h>

int main()
{
	int phy,che,bio,math,com;
	float result;
	
	printf("Enter the marks of physics : ");
	scanf("%d",&phy);
	printf("Enter the marks of Chemistry : ");
	scanf("%d",&che);
	printf("Enter the marks of Biology : ");
	scanf("%d",&bio);
	printf("Enter the marks of Mathematicsics : ");
	scanf("%d",&math);
	printf("Enter the marks of Computer : ");
	scanf("%d",&com);
	
	result = (phy+che+bio+math+com)/5.0;
	
	if(result>90)
	{
		printf("Grade : A\n");
		printf("result : %.2f",result);
	}
	else if(result>80)
	{
		printf("Grade : B\n");
		printf("result : %.2f",result);
	}
	else if(result>70)
	{
		printf("Grade : C\n");
		printf("result : %.2f",result);
	}
	else if(result>60)
	{
		printf("Grade : D\n");
		printf("result : %.2f",result);
	}
	else if(result>50)
	{
		printf("Grade : E\n");
		printf("result : %.2f",result);
	}
	else if(result>40)
	{
		printf("Grade : F\n");
		printf("result : %.2f",result);
	}
	
	
	return 0;
}