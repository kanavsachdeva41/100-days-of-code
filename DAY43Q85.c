// Q85: Reverse a string. //

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    int n=strlen(str);

    for(int i=0;i<n/2;i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("Reverse of string: %s", str);
}