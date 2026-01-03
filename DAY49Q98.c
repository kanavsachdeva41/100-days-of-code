// Q98: Print initials of a name with the surname displayed in full. //

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    
    // Read full name (first, middle(s), surname)
    fgets(name, sizeof(name), stdin);

    // Remove newline at the end if present
    name[strcspn(name, "\n")] = 0;

    char *token = strtok(name, " ");
    char *words[10];
    int count = 0;

    // Split the name into words
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    // Print initials for all except
