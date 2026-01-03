// Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum names
{
    RED,
    YELLOW,
    GREEN
};

void main()
{
    enum names n;

    for(n=RED;n<=GREEN;n++)
    {
        switch(n)
        {
            case RED: printf("RED: %d\n", n);
            break;
            case YELLOW: printf("YELLOW: %d\n", n);
            break;
            case GREEN: printf("GREEN: %d\n", n);
            break;
        }
    }
}