// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>

enum signals
{
    RED,
    YELLOW,
    GREEN,
};

void main()
{
    char colour[100];

    enum signals sign;

    printf("Enter colour of traffic light: ");
    scanf("%s", colour);

    if(strcmp(colour, "RED") == 0 )
    {
        sign=RED;
    }
    else if(strcmp(colour, "YELLOW") == 0 )
    {
        sign=YELLOW;
    }
    else
    {
        sign=GREEN;
    }

    switch(sign)
    {
        case RED: 
        printf("Stop");
        break;
        case YELLOW:
        printf("Wait");
        break;
        case GREEN: 
        printf("Go");
        break;
    }

}