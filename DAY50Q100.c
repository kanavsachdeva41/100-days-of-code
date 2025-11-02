// Q100: Print all sub-strings of a string. //

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int i,j,k;

    printf("Enter a string: ");
    fgets(str,100,stdin);
    str[strcspn(str, "\n")] = '\0';

    int n=strlen(str);

    printf("\nAll strings are: \n");

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
}