//5. WAP to find the sum of prime numbers between 1 to 50 without using a loop.

#include<stdio.h>

int main()
{
	int x=1,y=50,sum=0;
	
	start:
		if(x<=y)
		{
			x++;
			if(x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0 || x==2 || x==3 || x==5 || x==7)
			{ 
				printf(" %d ",x);
				sum = sum + x;
			}
			goto start;
		}
		printf("\n\nThe sum of all prime number is : %d",sum);
		
		return 0;
}
