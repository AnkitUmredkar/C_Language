//wap to find reverce number

#include<stdio.h>

void main()
{
	int n,r,add=0;
	
	printf("n : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		r = n%10;
		add = add + r;
		n = n/10;
	}
	
	printf("The sum of all digit is : %d",add);
}