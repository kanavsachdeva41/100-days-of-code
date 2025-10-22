// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format. //

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>
void main()
{
    int n;
    printf("enter time in sec \n");
    scanf("%d", & n);
    
    int hour=n%60;
    n=n/60;
    int min=n%60;
    n=n/60;
    int sec=n;

    printf("%d:%d:%d", hour,min,sec);
}