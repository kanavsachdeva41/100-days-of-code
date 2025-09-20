// Q43: Write a program to check if a number is a strong number. //

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>
void main()
{
    int n,dig,sum=0;
    printf("enter n:");
    scanf("%d", &n);

    int ori=n;

    while(ori>0)
    {
        dig=ori%10;
        int fac=1;
        for(int i=1;i<=dig;i++)
        {
            fac*=i;
        }
        sum+=fac;
        ori=ori/10;
    }

    if(sum==n)
    {
        printf("Special number");
    }
    else
    {
        printf("Not a special number");
    }

}