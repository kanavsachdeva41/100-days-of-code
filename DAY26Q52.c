// Q52: Write a program to print the following pattern: 
/*

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int i, j;
    
    int groups[] = {1, 3, 5, 3, 1}; // Number of stars in each group
    int n = 5; // Number of groups
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        printf("\n"); // Blank line between groups
    }

    return 0;
}
