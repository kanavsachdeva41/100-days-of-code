// Q144: Write a function that accepts a structure as parameter and prints its members. //

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

typedef struct Student 
{
    char name[20];
    int roll;
    int marks;
}stu;

void printStudent(stu s)
{
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
}

int main()
{
    stu s;
    
    printf("Enter name, rollno and marks: ");
    scanf("%s %d %d", s.name, &s.roll, &s.marks);

    printStudent(s);

    return 0;
}
