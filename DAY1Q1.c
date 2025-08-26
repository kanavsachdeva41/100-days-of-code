// Q1: Write a program to input two numbers and display their sum.// 

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/ 
#include <stdio.h>
void main()
{
    int a, b;

    printf("enter value of a is");
    scanf("%d", &a);

    printf("enter value of b is");
    scanf("%d", &b);

    int sum=a+b;
    printf("sum of two numbers is %d", sum);
    
}