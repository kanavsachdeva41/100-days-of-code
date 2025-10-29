// Q86: Check if a string is a palindrome. //

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    int n=strlen(str),flag=1;

    for(int i=0;i<=n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag=0;
            break;
        }
    }

    if(flag==0)
    {
        printf("String %s is not a palindrome.\n", str);
    }
    else
    {
        printf("String %s is a palindrome.\n", str);
    }
}