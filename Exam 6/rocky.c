#include<stdio.h>

int part1()
{
	int a=30;
	return a;
}
int part2()
{
	int b=30;
	return b;
}
int part3()
{
	int c=30;
	return c;
}

int dealer(int a,int b,int c)
{
	int d = a+b+c;
	return d;
}
int rocky()
{
	int e=10+dealer(part1(), part2() , part3());
	return e;
}

int main()
{
	printf("%d",rocky());
	return 0;
}
