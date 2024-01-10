//4. wap to find the address of the chain pointer.

#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	int *ptr1 = &a;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	
	printf("\n%d",****ptr4);
	
 	return 0;
}
