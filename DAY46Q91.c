// Q91: Remove all vowels from a string. //

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100],result[100],j=0;

    printf("Enter a string: ");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++)
    {
        if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'))
        {
            result[j++]=str[i];
        }
    }

    result[j]='\0';

    puts(result);
}