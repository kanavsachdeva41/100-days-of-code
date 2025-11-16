// Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
int piv(int n,int *num);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }

    int result=piv(n,arr);
    printf("Pivot integer: %d",result);
}

int piv(int n,int *num)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        total=total+num[i];
    }

    int left=0;
    for(int i=0;i<n;i++)
    {
        int right=total-num[i]-left;
        if(right==left)
        {
            return i+1;
        }
        left=left+num[i];
    }

    return -1;
}