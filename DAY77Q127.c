// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
void main()
{
    char line[100];

    FILE *in, *out;

    in=fopen("input.txt", "r");
    out=fopen("output.txt", "w");

    while(fgets(line,100,in) != NULL)
    {
        for(int i=0;i<100;i++)
        {
            if(line[i]>='a' && line[i]<='z')
            {
                line[i]=line[i]-32;
            }
        }
        fputs(line,out);
    }
    fclose(in);
    fclose(out);
}