// Q124: Take two filenames from the user - a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
void main()
{
    char srcName[100], destName[100];
    FILE *src, *dest;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", srcName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Cannot open source file.\n");
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Cannot open destination file.\n");
        fclose(src);
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);
}
