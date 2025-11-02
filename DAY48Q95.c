// Q95: Check if one string is a rotation of another. //

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int isrotation(char str1[],char str2[])
{
    int n1=strlen(str1);
    int n2=strlen(str2);

    if(n1!=n2)
    {
        return 0;
    }

    char temp[100];

    strcpy(temp,str1);
    strcat(temp,str1);

    if(strstr(temp,str2)!= NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1,100,stdin);
    printf("Enter second string: ");
    fgets(str2,100,stdin);

    str1[strcspn(str1, "\n")] ='\0';
    str2[strcspn(str2, "\n")] ='\0';

    if(isrotation(str1,str2))
    {
        printf("Strings are rotation of each other.\n");
    }
    else
    {
        printf("Strings are not rotation of each other.\n");
    }

    return 0;

}