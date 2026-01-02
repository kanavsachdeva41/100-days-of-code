// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
void main()
{
    char line[100],filename[100];
    int vow=0, conso=0;

    FILE *file;

    printf("Enter filename: ");
    scanf("%s", filename);

    file=fopen(filename,"r");

    while(fgets(line,100,file) != NULL)
    {
        for(int i=0;line[i]!='\0';i++)
        {
            if ((line[i] >= 'a' && line[i] <= 'z') ||
                (line[i] >= 'A' && line[i] <= 'Z'))
            {
                if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
                {
                    vow++;
                }
                else
                {
                    conso++;
                }
            }
        }
    }
    fclose(file);

    printf("Vowels: %d\nConsonants: %d", vow, conso);
}