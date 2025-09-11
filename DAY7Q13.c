// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.//

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include <stdio.h>
void main()
{
    int x;

    printf("Enter the year:");
    scanf("%d", &x);

    if(x%4==0)
    {
        printf("Entered year is a leap year");
    }
    else
    {
        printf("Entered year is not a leap year");
    }
}