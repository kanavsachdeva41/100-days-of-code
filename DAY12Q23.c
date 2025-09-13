// Q23: Write a program to calculate library fine based on late days as follow //

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
void main()
{
    int days;
    
    printf("enter number of days:");
    scanf("%d", &days);

    int x1=2*days, x2=10+4*(days - 5), x3=30+6*(days - 10);

    if(days<=5)
    {
        printf("Fine $%d", x1);
    }
    else if (days>=6 && days<=10)
    {
        printf("Fine $%d", x2);
    }
    else if (days>=11 && days<=30)
    {
        printf("Fine $%d", x3);
    }
    else
    {
        printf("Memebrship cancelled");
    }

}