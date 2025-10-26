// Q83: Count vowels and consonants in a string. //

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
void main()
{
    char str[100];
    int countv=0,countc=0;

    printf("Enter string: ");
    scanf("%s", str);

    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            countv++;
        }
        else
        {
            countc++;
        }
    }
    printf("vowels: %d, consonants: %d", countv, countc);

}