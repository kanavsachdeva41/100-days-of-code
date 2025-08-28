// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time. //

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    int p, r, t;
    float a;

    printf("enter principal amount");
    scanf("%d", &p);

    printf("enter rate of interest");
    scanf("%d", &r);

    printf("enter time duration");
    scanf("%d", &t);

    float SI=(p*r*t)/100;
    printf("value of simple interest is %f \n", SI);

    float A = p*(pow(1+(r/100.0), t));
    printf("value of final amount is %f \n", A);

    float CI=A-p;
    printf("value of compound interest is %f \n", CI);
}