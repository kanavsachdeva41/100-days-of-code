// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %. //

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
void main()
{   
    int a,b;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    char x;

    printf("enter the operator:");
    scanf(" %c", &x);

    int result;

    switch(x)
    {
        case '+': result=a+b;
        break;
        case '-': result=a-b;
        break;
        case '*': result=a*b;
        break;
        case '/': result=a/b;
        break;
        case '%': result=a%b;
        break;
        default: printf("Invalid operator");
    }

    printf("Result is %d %c %d = %d", a, x, b, result);
}