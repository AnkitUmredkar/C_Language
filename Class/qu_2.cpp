//Write a program to convert second into hh: mm: ss

#include<iostream>
using namespace std;

int main()
{
	int a,ss,mm=0,hh=0,o;
	
	cout << "Enter the seconds :";
	cin >> a;
	
	ss = a % 60;
	mm = (a / 60);
	
	if(mm >= 60)
	{
		mm = mm - 60;
	}
	else
	{
		mm = 60 - mm;
	}
	
	a = (a / 60);
	hh = (a / 60);
	
//	while(o >=60)
//	{
//		ss = o - 60;
//		o = o - 60;
//	}
//	while(a >=60)
//	{
//		mm = mm + 1;
//		a = a - 60;
//	}
//	
//	while(mm >=60)
//	{
//		hh = hh + 1;
//		mm = mm - 60;
//	}
//	
	cout << hh << " : "<< mm << " : " << ss;
	
 	return 0;
}
