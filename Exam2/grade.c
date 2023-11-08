//5. wap to calculate students grade

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