// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. //

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
void main()
{
    int n;
    float sum=1;

    printf("enter number of terms:");
    scanf("%d", &n);

    for(int i=2;i<=n;i++)
    {
        float num=2*i-1;
        float den=2*i;
        sum=sum+(num/den);
    }

    printf("Approximate sum: %.1f", sum);

}