#include<stdio.h>
#include<string.h>

struct stu
{
	int d,m,y,age;
	char name[50];
};

void answer()
{
	int i,c,l=0,age=0;
	struct stu s[3];
	
	FILE *fp = fopen("data.txt","w");
	
	for(i=0; i<3; i++)
	{
		printf("\n\nEnter the student %d student details :\n",i+1);
		printf("Enter the student student name : ");
		scanf(" %[^\n]s",&s[i].name);
		
		year:		
		printf("\n\nEnter the student birth year between (1924 to 2024) : ");
		scanf("%d",&s[i].y);
		
		if(s[i].y >= 1924 && s[i].y <= 2024)
		{
			
		}
		else
		{
			printf("\nEnter the year between 1924 to 2024 !!");
			goto year;
		}
		
		month:
		printf("\n\nEnter the student birth month(1 to 12) : ");
		scanf("%d",&s[i].m);
		
		if(s[i].m >= 1 && s[i].m <= 12)
		{
			
		}
		else
		{
			printf("\nEnter the month between 1 to 12 !!");
			goto month;
		}
		
		start:
		if(s[i].m >= 1 || s[i].m <= 12)
		{
			if(s[i].y == 2024)
			{
				if(s[i].m == 1)
				{
					printf("\n\nEnter the student birth date (1 to 20): ");
					scanf("%d",&s[i].d);
					if(s[i].d >= 1 && s[i].d <= 20)
					{
					}
					else
					{
						printf("Enter the date befor 20th january 2024 !!");
						goto start;
					}
				}
				else
				{
					printf("Enter the month of current date !!");
					goto month;
				}
				
			}
			else if(s[i].m == 1 || s[i].m == 3 || s[i].m == 5 || s[i].m == 7 || s[i].m == 8 || s[i].m == 10 || s[i].m == 12)
			{
				printf("\n\nEnter the student birth date (1 to 31): ");
				scanf("%d",&s[i].d);
				
				if(s[i].d >= 1 && s[i].d <= 31)
				{	
				}
				else
				{
					printf("\nEnter the date between 1 to 31 !!");
					goto start;
				}
			}
			else if(s[i].m == 4 || s[i].m == 6 || s[i].m == 9 || s[i].m == 11)
			{
				printf("\n\nEnter the student birth date (1 to 30): ");
				scanf("%d",&s[i].d);
				
				if(s[i].d >= 1 && s[i].d <= 30)
				{	
				}
				else
				{
					printf("\nEnter the date between 1 to 30!!");
					goto start;
				}
			}
			else if(s[i].m == 2)
			{
				if(s[i].y % 4 == 0)
				{
					printf("\n\nEnter the student birth date (1 to 29): ");
					scanf("%d",&s[i].d);
					
					if(s[i].d >= 1 && s[i].d <= 29)
					{
					}
					else
					{
						goto start;
					}
				}
				else
				{
					printf("\nEnter the student birth date (1 to 28): ");
					scanf("%d",&s[i].d);
					
					if(s[i].d >= 1 && s[i].d <= 28)
					{
					}
					else
					{
						goto start;
					}
				}
			}
			else
			{
				goto start;
			}
			
		}
		else
		{
			goto start;
		}
	}
	
	
	for(i=0; i<3; i++)
	{
		for(c=s[i].y; c<2024; c++)
		{
			age++;
		}
		s[l].age = age;
		fprintf(fp,"\n\nThe %d student details are below ",i+1);
		fprintf(fp,"\nThe student name is : %s",s[i].name);
		fprintf(fp,"\nThe student Birth date is : %d/%d/%d",s[i].d,s[i].m,s[i].y);
		fprintf(fp,"\nThe student age is : %d",s[i].age);
		l++;
		age=0;
	}
}

int main()
{
	answer();
	
	return 0;
}