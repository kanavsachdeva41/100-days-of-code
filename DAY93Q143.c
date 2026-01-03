// Q143: Find and print the student with the highest marks. //

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    int n, i, topIndex = 0;
    struct Student s[10];

    printf("Enter number of students: ");
    scanf("%d", &n);  

    printf("Enter name,roll_no and marks: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[topIndex].marks) 
        {
            topIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)", s[topIndex].name, s[topIndex].marks);

    return 0;
}


