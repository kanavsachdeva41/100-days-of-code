// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient. //

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main()
{
    int a,b;

    printf("enter value of a");
    scanf("%d", & a);

    printf("enter value of b");
    scanf("%d", & b);
    
    printf("value of sum of two numbers is %d \n", a+b);

    int sub=a-b;
    printf("value of difference of two numbers is %d \n", sub);

    int pro=a*b;
    printf("value of product of two numbers is %d \n", pro);

    int quo=(a/b);
    printf("value of quotient of two numbers is %d \n", quo);

    return 0;

}