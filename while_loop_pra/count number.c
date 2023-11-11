//3. Write C program to count number of digits in a number.

#include<stdio.h>
#include<conio.h>

int main() 
{
    int number, count = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number >= 9) 
	{
        number = number / 10; 
        count++;     
    }

    printf("Number of digits: %d\n", count);

    return 0;
}


