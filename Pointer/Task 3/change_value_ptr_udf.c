//4. wap to change value by passing address of variable in udf.

#include<stdio.h>

void changevalue(int *ptr)
{
	int n;
	
	printf("\n\nEnter the number which you want to put after changing : ");
	scanf("%d",&n);
	
	*ptr = n;
}

int main()
{
	int a;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("\nvalue before function call : ");
	printf("\na : %d",a);
	
	changevalue(&a);
	
	printf("\nValue after function call : ");
	printf("\na : %d",a);
	
 	return 0;
}
