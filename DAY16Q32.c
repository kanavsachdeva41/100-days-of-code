// Q32: Write a program to check if a number is a palindrome. //

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>
void main()
{
    int n,rev=0,dig,num;

    printf("enter n:");
    scanf("%d",&n);
    num=n;

    while (n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }

    if(rev==num)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

}