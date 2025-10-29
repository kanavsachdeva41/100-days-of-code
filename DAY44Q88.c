// Q88: Replace spaces with hyphens in a string. //

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str[i]='-';
        }
    }

    puts(str);
}