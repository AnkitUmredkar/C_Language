#include<stdio.h>
#include<string.h>

struct stu
{
	int d,m,y,age;
	char name[50];
};

void birthdate(int i,int n,struct stu s[n],FILE *fp)
{
	int c,age=0;
	
	year:		
	printf("\n\nEnter the student birth year between (1924 to 2024) : ");
	scanf("%d",&s[i].y);
		
	if(s[i].y >= 1924 && s[i].y <= 2024)
	{
		month:
		printf("\n\nEnter the student birth month(1 to 12) : ");
		scanf("%d",&s[i].m);
		if(s[i].m >= 1 && s[i].m <= 12)
		{
			start:
			if(s[i].y == 2024)
			{
				if(s[i].m == 1)
				{
					printf("\n\nEnter the student birth date (1 to 20): ");
					scanf("%d",&s[i].d);
					if(s[i].d >= 1 && s[i].d <= 20)
					{
						s[i].age= s[i].d;
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
					s[i].age = 2024 - s[i].y;	
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
					s[i].age = 2024 - s[i].y;	
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
					printf("\n\nEnter the student birth date (1 to 29) : ");
					scanf("%d",&s[i].d);
						
					if(s[i].d >= 1 && s[i].d <= 29)
					{
						s[i].age = 2024 - s[i].y;
					}
					else
					{
						printf("Enter the birth date (1 to 29) !! ");
						goto start;
					}
				}
				else
				{
					printf("\nEnter the student birth date (1 to 28) : ");
					scanf("%d",&s[i].d);
						
					if(s[i].d >= 1 && s[i].d <= 28)
					{
						s[i].age = 2024 - s[i].y;
					}
					else
					{
						printf("Enter the student birth date (1 to 28) !! ");
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
			printf("\nEnter the month between 1 to 12 !!");
			goto month;
		}
	}
	else
	{
		printf("\nEnter the year between 1924 to 2024 !!");
		goto year;
	}	
	

	printf("\n\nThe %d student details are below ",i+1);
	printf("\nName      : %s",s[i].name);
	printf("\nBirthdate : %d/%d/%d",s[i].d,s[i].m,s[i].y);
	printf("\nAge       : %d",s[i].age);
			
	fprintf(fp,"\n\nThe %d student details are below ",i+1);
	fprintf(fp,"\nName      : %s",s[i].name);
	fprintf(fp,"\nBirthdate : %d/%d/%d",s[i].d,s[i].m,s[i].y);
	fprintf(fp,"\nAge       : %d",s[i].age);														
}

void name(int i,int n,struct stu s[n],FILE *fp)
{
	printf("\n\nEnter the student %d student details :\n",i+1);
	printf("Enter the student name : ");
	scanf(" %[^\n]s",&s[i].name);
	
	birthdate(i,n,s,fp);
}

int main()																								
{
	int i,n=3;
	struct stu s[n];
	FILE *fp = fopen("data.txt","w");
	
	for(i=0; i<n; i++)
	{
		name(i,n,s,fp);
	}
	
	
	return 0;
}