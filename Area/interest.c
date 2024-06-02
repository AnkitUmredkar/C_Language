//5. WAP to Simple interest.

#include<stdio.h>
#include<conio.h>

main()
{
	float p,r,interest;
	int t;
	const int d = 100;
    
    printf("Enter the principle amount : ");
    scanf("%f",&p);
    
    printf("Enter the interest rate : ");
    scanf("%f",&r);
    
    printf("Enter the time period: ");
    scanf("%d",&t);
    
    interest = (p*r*t)/d;
	
	printf ("\nThe interest is %.2f" , interest);
	
}
