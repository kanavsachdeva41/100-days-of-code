// Q92: Find the first repeating lowercase alphabet in a string. //

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100],ch;
    int j,found=0;

    printf("Enter string: ");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++)
    {
        ch=str[i];
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==ch)
            {
                printf("first repeating lowercase alphabet in a string is %c",ch);
                found=1;
                break;
            }
        }
        if(found)
        break;
    }
    if(!found)
    {
        printf("No repeating lowercase character\n");
    }
}