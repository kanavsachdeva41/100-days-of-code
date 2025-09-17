// Q38: Write a program to find the sum of digits of a number. //

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
void main()
{
    int n,dig,d=0;

    printf("enter n:");
    scanf("%d", &n);

    while(n>0)
    {
        dig=n%10;
        d=d+dig;
        n=n/10;
    }
    printf("%d",d);
}
