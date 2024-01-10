#include<stdio.h>

void change(int *ptr)
{
	*ptr--;
}

int main()
{
 	int n;
 	
 	printf("Enter the value of n : ");
 	scanf("%d",&n);
 	
 	change(&n);
 	
 	printf("\nThe value after decrease : %d",n);
 	
 	return 0;
}
