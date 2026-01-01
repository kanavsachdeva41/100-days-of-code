// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>
void main()
{
    FILE *fp;
    char filename[100];
    char line[256];

    printf("Enter existing file name: ");
    scanf("%s", filename);

    getchar();

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file.\n");

    }

    printf("Enter text to append: ");
    fgets(line, sizeof(line), stdin);

    fputs(line, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

}