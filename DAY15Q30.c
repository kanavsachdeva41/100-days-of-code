// Q30: Write a program to reverse a given number. //

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
void main()
{
    int n,rev=0,dig;

    printf("enter the number to be reversed:");
    scanf("%d", &n);

    while (n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    printf("%d\n", rev);
}