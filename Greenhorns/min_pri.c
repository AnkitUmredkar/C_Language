//minimum or maximum using only printf

#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("Enter the value of a : ");
	scanf("%d",&a); 
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	printf("Enter the value of d : ");
	scanf("%d",&d);
	
	printf("\na is minimum or not : %d\n",a<b && a<c && a<d);
	printf("b is minimum or not : %d\n",b<a && b<c && b<d);
	printf("c is minimum or not : %d\n",c<a && c<b && c<d);
	printf("d is minimum or not : %d\n",d<a && d<b && d<c);
	
	return 0;
}