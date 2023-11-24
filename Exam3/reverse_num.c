// 4. wap to reverse number of given number

#include<stdio.h>

int main()
{
	int n,a=0,r;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		r = n % 10;
		a = r + (a*10);
		n = n / 10; 
	}
	
	printf("The reverse number is : %d",a);
	
	return 0;
}