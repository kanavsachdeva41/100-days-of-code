// Q6: Write a program to swap two numbers using a third variable. //

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Value of a and c before swapping is ");
    scanf("%d%d", &a, &c);

    b=a;
    a=c;
    c=b;

    printf("Value of a after swapping is %d \n", a);
    printf("Value of c after swapping is %d", c);




}