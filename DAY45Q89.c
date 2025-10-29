// Q89: Count frequency of a given character in a string. //

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100],ch;
    int count=0;

    printf("Enter a string: ");
    fgets(str,100,stdin);

    printf("\nEnter character: ");
    scanf("%c", &ch);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }

    printf("Frequency of %c in %s is %d", ch, str, count);
}