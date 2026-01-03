// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data. //

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>

typedef struct student
{
    char name[100];
    int roll_no;
    int marks;
} stu;

void main()
{
    stu s;

    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll: ");
    scanf("%d\n", &s.roll_no);
    printf("Marks: ");
    scanf("%d\n", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no ,s.marks);
}