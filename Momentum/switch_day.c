//4. Write C program use switch statement. Display Monday to Sunday.
//    Ex. User Input: M
//    Output: Monday

#include<stdio.h>

int main()
{
	char c;
	
	printf("Enter the first character of day : ");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'm': printf("Monday");
		break;
		case 't': printf("Tuesday");
		break;
		case 'w': printf("wednesday");
		break;
		case 'T': printf("Thursday");
		break;
		case 'f': printf("friday");
		break;
		case 's': printf("saturday");
		break;
		case 'S': printf("Sunday");
		break;
	}
	
	return 0;
}