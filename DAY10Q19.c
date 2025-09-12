// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths. //

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include <stdio.h>
void main()
{
    float a,b,c;

    printf("enter sides of triangle\n");
    scanf(" %f %f %f", &a, &b, &c);

    if(a==b && b==c && a==c)
    {
        printf("Triangle is equilateral.");
    }
    else if((a==b && a!=c && b!=c) || (b==c && b!=a && c!=a) || (a==c && a!=b && c!=b))
    {
        printf("Triangle is isosceles");
    }
    else
    {
        printf("Triangle is scalene.");
    }
}