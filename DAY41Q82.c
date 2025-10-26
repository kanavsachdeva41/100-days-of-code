// Q82: Print each character of a string on a new line. //

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
void main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        printf("%c\n", ch);
    }
}