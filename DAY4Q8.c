// Q8: Write a program to find and display the sum of the first n natural numbers. //

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>
void main()
{
    int n;

    printf("number of natural numbers is");
    scanf("%d", & n);

    int N=(n*(n+1))/2;
    printf(" value of sum of n natural numbers is %d", N);
    
}

