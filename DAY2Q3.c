// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth. //

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
void main()
{
    int l,b;

    printf("enter side l which is");
    scanf("%d", &l);

    printf("enter side b which is");
    scanf("%d", &b);

    int peri=2*(l+b);
    printf("value of perimeter of rectangle is %d \n", peri);

    int area=l*b;
    printf("value of area of rectangle is %d \n", area);


}
