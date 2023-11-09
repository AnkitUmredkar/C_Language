//9. wap to make votter registration system.

#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	if(age>0)
	{
		if(age>100)
		{
			printf("You are not eligible for votting");
		}
		else
		{
			printf("You are eligible for votting");
		}
	}
	else
	{
			if(age==0)
		{
			printf("You enter neautral age that not possible");
		}
		else
		{
			printf("You enter negitive age that not possible");
		}
	}
	
	return 0;
}