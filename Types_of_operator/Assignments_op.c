// Example of assignment operators
#include <stdio.h>
int main()
{
    int a,c;
    
    printf("Enter the value of a : ");
    scanf("%d",&a);

    c = a;      // c is 5
    printf("\nc = %d\n", c);
    c += a;     // c is 10 
    printf("c (+=) = %d\n", c);
    c -= a;     // c is 5
    printf("c (-=) = %d\n", c);
    c *= a;     // c is 25
    printf("c (*=) = %d\n", c);
    c /= a;     // c is 5
    printf("c (/=) = %d\n", c);
    c %= a;     // c = 0
    printf("c (%=) = %d\n", c);

    return 0;
}