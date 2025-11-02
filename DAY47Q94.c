// Q94: Find the longest word in a sentence. //

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], longest[100], word[100];
    int i = 0, j = 0, max = 0, n;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    while(1) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        }
        else 
        {
            word[j] = '\0';
            n = strlen(word);
            if(n > max) {
                max = n;
                strcpy(longest, word);
            }
            j = 0;
        }
        if(str[i] == '\0' || str[i] == '\n') break;
        i++;
    }
    printf("LONGEST WORD: %s\n", longest);
    printf("Length: %d\n", max);
}
