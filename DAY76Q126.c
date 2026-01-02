// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>
void main()
{
    char filename[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *file;

    file=fopen(filename,"r");

    if(file == NULL)
    {
        printf("Error: File does not exists!");
    }
    else
    {
        printf("File opened successfully\n");

        char line[100];

        while(fgets(line,100,file)!= NULL)
        {
            printf("%s", line);
        }
    }

    fclose(file);
}