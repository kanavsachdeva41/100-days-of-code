// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
int main() 
{
    FILE *fp;
    char name[100];
    int roll, n;
    float marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if (fp == NULL)
     {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) 
    {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) 
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) 
    {
        printf("Name: %s | Roll: %d | Marks: %.0f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
