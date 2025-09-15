// Q29: Write a program to calculate the factorial of a number. //

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int x=1;

    for(int i=1;i<=n;i++)
    {
        x=x*i;
    }
    printf("factorial of %d is %d", n, x);

}