// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: //

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include <stdio.h>
void main()
{
    int x;

    printf("Enter marks obtained:");
    scanf("%d", &x);

    if(x>=90 && x<=100)
    {
        printf("Grade obtained is A");
    }
    else if (x>=80 && x<=89)
    {
        printf("Grade obtained is B");
    }
    else if (x>=70 && x<=79)
    {
        printf("Grade obtained is C");
    }
    else if(x>=60 && x<=69)
    {
        printf("Grade obtained is D");
    }
    else
    {
        printf("Grade obtained is F");
    }
}