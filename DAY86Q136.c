// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. //

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum operation
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

void main()
{
    int a,b;
    char op[10];

    enum operation sign;

    printf("Enter operation: ");
    scanf("%s", op);

    printf("Enter numbers: ");
    scanf("%d %d", &a, &b);

    if(strcmp(op,"ADD")==0) sign= '+';
    else if(strcmp(op,"SUBTRACT")==0) sign='-';
    else sign='*';

    switch (sign)
    {
    case '+': printf("Sum is %d", a+b);
    break;
    case '-': printf("Difference is %d",a-b);
    break;
    case '*': printf("Product is %d", a*b);
    break;
    }
}