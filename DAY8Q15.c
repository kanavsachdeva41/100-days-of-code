// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. //

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>
void main()
{
    char n;
    printf("enter character:");
    scanf("%c", & n);

    if (n>='A' && n<='Z')
    {
        printf("enter character is an uppercase character");
    }
    else if (n>='a' && n<='z')
    {
        printf("enter character is a lowercase character");
    }
    else if (n>='0' && n<='9')
    {
        printf("enter character is a digit");
    }
    else
    {
        printf("enter character is a special character");
    }
}