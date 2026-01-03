// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee 
{
    char name[20];
    int id;
    float salary;
};

int main() 
{
    struct Employee e1, e2;
    FILE *fp;

    // Read employee details
    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display employee data
    printf("Name: %s | ID: %d | Salary: %.2f",
           e2.name, e2.id, e2.salary);

    return 0;
}
