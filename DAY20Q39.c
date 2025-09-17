// Q39: Write a program to find the product of odd digits of a number. //

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
void main()
{
    int n,dig,pro=1;

    printf("enter n:");
    scanf("%d", &n);

    while(n>0)
    {
        dig=n%10;

        if(dig==1 || dig==3 || dig==5 || dig==7 || dig==9)
        {
            pro=pro*dig;
        }

        n=n/10;
    }
    printf("%d", pro);
}