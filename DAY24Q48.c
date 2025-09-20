// Q48: Write a program to print the following pattern: //
/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>
void main()
{
    int i,r=1;

    for(i=1;i<=5;i++)
    {
        if(i==1)
        {
            printf("%d\n", i);
        }
        else
        {
            r=r*10+i;
            printf("%d\n", r);
        }
    }
}