//3. Write a program in C to count the frequency of each element of an array.

#include<stdio.h>

int main()
{
	int l,sum,num;
	
	printf("Enter The Value Of Size 1D Array :");
	scanf("%d",&l);
	
	int a[l],b[l+50];
	
	int i,j,check=0,count;
	
	for(i=0; i<l; i++)
	{
		printf("Enter The Value Of Array : ");
		scanf("%d",&a[i]);
		b[i]=-1;
	}
	int k;
	for(i=0; i<l; i++)
	{
		count=1;
		for(k=i+1; k<l; k++)
		{
			if(a[i]==a[k])
			{
				count++;
				b[k]=0;
			}
		}
		if(b[i]!=0)
		{
			b[i]=count;
		}
	}
	
	printf("\n");
	
	for(i=0; i<l; i++)
	{
		if(b[i]!=0)
		{
			printf("%d --> %d\n",a[i],b[i]);
		}
	}
        return 0;
}
