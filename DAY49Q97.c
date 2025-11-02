// Q97: Print the initials of a name. //

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name,100,stdin);

    printf("Initials: ");
    if(name[0]!=' ')
    {
        printf("%c.", name[0]);
    }

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]==' ' && name[i+1]!=' ' && name[i+1]!='\0')
        {
            printf("%c.", name[i+1] );
        }
    }
}