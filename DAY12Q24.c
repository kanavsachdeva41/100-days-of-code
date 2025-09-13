// Q24: Write a program to calculate electricity bill based on units consumed with these rates: //

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
void main()
{
    int unit;
    printf("enter units consumed:");
    scanf("%d", & unit);

    int u1=5*unit, u2= 500 + 7*(unit-100), u3= 1200 + 10*(unit-200), u4=2200+12*(unit-300);

    if (unit<100)
    {
        printf("Bill: $%d", u1);
    }
    else if (unit>=101 && unit<=200)
    {
        printf("Bill: $%d", u2);
    }
    else if (unit>=201 && unit<=300)
    {
        printf("Bill: $%d", u3);
    }
    else
    {
        printf("Bill: $%d", u4);
    }
}