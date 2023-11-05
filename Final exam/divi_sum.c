// 65.WAP to find the sum of sequence 1/1 + 1/2 + 1/3 + 1/4 + 1/5 +......1/n
#include<stdio.h>
main()
{ 
	int n;
	float i,sum=0.0;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
	    printf("1/%.0f + ",i);
		sum = sum + 1/i;
	}
	
	printf("\nSum Is %f",sum);
}