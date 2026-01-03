// Q146: Create Employee structure with nested Date structure for joining date and print details. //

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

struct Date 
{
    int day;
    int month;
    int year;
};

struct Employee 
{
    char name[20];
    int id;
    struct Date join;
};

int main() 
{
    struct Employee e;

    printf("Enter name,id and date of joining: ");
    scanf("%s %d %d %d %d",
          e.name,
          &e.id,
          &e.join.day,
          &e.join.month,
          &e.join.year);

    printf("Name: %s | ID: %d | Joining Date: %d/%d/%d",
           e.name,
           e.id,
           e.join.day,
           e.join.month,
           e.join.year);

    return 0;
}
