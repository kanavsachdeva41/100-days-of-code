// Q4: Write a program to calculate the area and circumference of a circle given its radius. //

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>
void main()
{
    int r;

    printf("radius of circle is");
    scanf("%d", &r);

    float pi=3.14;

    float circum = 2*pi*r;
    printf("value of circumference of circle is %f", circum);

    float area = pi*r*r;
    printf("value of area of circle is %f", area);

}
