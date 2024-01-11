//2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. 

#include<stdio.h>
#include<string.h>

struct employee
{
	int emp_id, emp_age, emp_experience;
	char emp_name[50], emp_role[50],emp_city[50],emp_company_name[50];
};

int main()
{
	int n,i;
	printf("Enter the number of employee : ");
	scanf("%d",&n);
	
 	struct employee s[n];
 	char a[100];
 	
 	for(i=0; i<n; i++)
 	{
 		printf("\nEnter the details of %d employee  \n",i+1);
 		
	 	printf("Enter the id of %d number Employee : ",i+1);
	 	scanf("%d",&s[i].emp_id);
	 		
	 	printf("Enter the age of %d number Employee : ",i+1);
	 	scanf("%d",&s[i].emp_age);
	 		
	 	printf("Enter the number of experience year of %d number Employee : ",i+1);
	 	scanf("%d",&s[i].emp_experience);
 		
		printf("Enter the name of %d number Employee : ",i+1);
		scanf(" %[^\n]s",&a);
		strcpy(s[i].emp_name,a);
	 		
		printf("Enter the role of %d number Employee : ",i+1);
		scanf(" %[^\n]s",&a);
		strcpy(s[i].emp_role,a);
	 		
		printf("Enter the city of %d number Employee : ",i+1);
		scanf(" %[^\n]s",&a);
		strcpy(s[i].emp_city,a);
	 		
		printf("Enter the company name of %d number Employee : ",i+1);
		scanf(" %[^\n]s",&a);
		strcpy(s[i].emp_company_name,a);	
	}
 	
 	for(i=0; i<n; i++)
 	{
 		printf("\n\nThe %d Employee's details are below\n",i + 1);
	 	printf("\n Employee's id is : %d\n", s[i].emp_id);
	 	printf(" Employee's age is : %d\n", s[i].emp_age);
	 	printf(" Employee's experience is : %d Year\n", s[i].emp_experience);
		printf(" Employee's name is : %s\n", s[i].emp_name);
	 	printf(" Employee's role is : %s\n", s[i].emp_role);
		printf(" Employee's city is : %s\n", s[i].emp_city);
	 	printf(" Employee's company name is : %s\n", s[i].emp_company_name);	
	}
 	
 	
 	return 0;
}