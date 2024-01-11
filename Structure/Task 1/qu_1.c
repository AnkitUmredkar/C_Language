//1 Write a Program to create Student Record System for 3 students using structure.

#include<stdio.h>
#include<string.h>

struct student
{
	int stu_id, stu_age, stu_standard;
	char stu_name[50], stu_course[50],stu_city[50],stu_school[50];
};

int main()
{
 	struct student s[3];
 	char a[100];
 	int i ;
 	
 	for(i=0; i<3; i++)
 	{
 		printf("\nEnter the details of %d student  \n",i+1);
 		
	 	printf("Enter the id of %d number student : ",i+1);
	 	scanf("%d",&s[i].stu_id);
	 		
	 	printf("Enter the age of %d number student : ",i+1);
	 	scanf("%d",&s[i].stu_age);
	 		
	 	printf("Enter the standard of %d number student : ",i+1);
	 	scanf("%d",&s[i].stu_standard);
 		
		printf("Enter the name of %d number student : ",i+1);
		scanf(" %[^\n]s",&a);
		strcpy(s[i].stu_name,a);
	 		
		printf("Enter the course of %d number student : ",i+1);
		scanf(" %[^\n]s",&a);
		strcpy(s[i].stu_course,a);
	 		
		printf("Enter the city of %d number student : ",i+1);
		scanf(" %[^\n]s",&a);
		strcpy(s[i].stu_city,a);
	 		
		printf("Enter the school name of %d number student : ",i+1);
		scanf(" %[^\n]s",&a);
		strcpy(s[i].stu_school,a);	
	}
 	
 	for(i=0; i<3; i++)
 	{
 		printf("\n\nThe %d student's details are below\n",i + 1);
	 	printf("\n Student's id is : %d\n", s[i].stu_id);
	 	printf(" Student's age is : %d\n", s[i].stu_age);
	 	printf(" Student's standard is : %d\n", s[i].stu_standard);
		printf(" Student's name is : %s\n", s[i].stu_name);
	 	printf(" Student's course is : %s\n", s[i].stu_course);
		printf(" Student's city is : %s\n", s[i].stu_city);
	 	printf(" Student's school name is : %s\n", s[i].stu_school);	
	}
 	
 	
 	return 0;
}