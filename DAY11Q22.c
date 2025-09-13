// Q22: Write a program to find profit or loss percentage given cost price and selling price. //

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
void main()
{
    float cp,sp;

    printf("enter cost price and selling price:");
    scanf("%f %f", &cp, &sp);

    float profit=((sp-cp)/cp)*100, loss=((cp-sp)/cp)*100;

    if(sp>cp)
    {
        printf("Profit %f ", profit);
    }
    else if (cp>sp)
    {
        printf("Loss %f ", loss);
    }
    else
    {
        printf("No profit nor loss");
    }
}