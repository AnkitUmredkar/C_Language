//WAP to print sequence 1,1,2,3,5,8,13,.

#include<stdio.h>

int main()
{
	int f=0,s=1,n=10,i,add;
	
	for(i=0; i<=n; i++)
	{
		add = f+s;
		printf("%d ",f);
		f=s;
		s=add;

	}
	
	
	return 0;
}