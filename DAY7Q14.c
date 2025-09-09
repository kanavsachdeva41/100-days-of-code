// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else. //

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
void main()
{
    char n;
    printf("enter charcter:");
    scanf("%c", & n);

    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        printf("enter character is a vowel");
    }
    else
    {
        printf("enter character is consonant");
    }
}