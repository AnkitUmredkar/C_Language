//3 wap to swap two variables without using the third variable and using a pointer.

#include<stdio.h>

int main()
{
	int a,b;
	int *ptr1, *ptr2;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	ptr1 = &a;
	ptr2 = &b;
	
	printf("\nBefore swapping : \n");
	
	printf("a : %d\n",*ptr1);
	printf("b : %d",*ptr2);
	
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	
	printf("\n\nAfter swapping : \n");
	
	printf("a : %d\n",*ptr1);
	printf("b : %d",*ptr2);
	
 	return 0;
}
