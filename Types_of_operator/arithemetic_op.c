// Example of arithmetic operators

#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("Enter the value of a : ");
    scanf("%d",&a);
    
    printf("Enter the value of b : ");
    scanf("%d",&b);
    
    c = a+b;
    printf("\na+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("a%%b (reminder) = %d \n",c);
    
    return 0;
}