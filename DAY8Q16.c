//Q16: Write a program to input three numbers and find the largest among them using if–else.//

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
void main()
{
    char a,b,c;
    printf("enter three numbers");
    scanf("%c %c %c",&a, &b, &c);

    if(b<a && c<a)
    {
        printf("Largest number is %c", a);
    }
    else if (a<b && c<b)
    {
        printf("Largest numner is %c", b);
    }
    else if (a<c && b<c)
    {
        printf("Largest number is %c", c);
    }
}