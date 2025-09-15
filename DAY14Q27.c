// Q27: Write a program to print the sum of the first n odd numbers. //

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    printf("enter n:");
    scanf("%d", &n);

    int sum=pow(n,2);

    for(int i=1;i<=n;i++)
    {
        printf("sum is %d", sum);
        break;
    }
}