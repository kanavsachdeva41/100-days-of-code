// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role. //

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main() 
{
    char role[10];
    enum Role r;

    printf("Please enter role: ");
    scanf("%s", role);

    if (strcmp(role, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(role, "USER") == 0)
        r = USER;
    else
        r = GUEST;

    if (r == ADMIN)
        printf("Welcome Admin!, You have full access");
    else if (r == USER)
        printf("Welcome User!, You have limited access");
    else
        printf("Welcome Guest!, Please login to continue");

    return 0;
}
