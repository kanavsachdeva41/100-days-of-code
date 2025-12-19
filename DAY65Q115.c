// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram". //

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], t[100];
    int freq[256]={0};

    int i;

    printf("Enter first string: ");
    fgets(s,100,stdin);
    printf("Enter second string: ");
    fgets(t,100,stdin);

    if(strlen(s)!=strlen(t))
    {
        printf("Not anagrams\n");
        return 0;
    }

    for(i=0;s[i]!='\0' && t[i]!='\0';i++)
    {
        freq[s[i]]++;
        freq[t[i]]--;
    }

    for(i=0;i<256;i++)
    {
        if(freq[i]!=0)
        { printf("Not anagrams\n");
        return 0; }

    }

    printf("Strings are anagrams\n");
    return 0;

}