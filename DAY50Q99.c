// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy. //

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    int d, m, y;
    char *mon[] = {"Jan","Feb","Mar","Apr","May","Jun",
                   "Jul","Aug","Sep","Oct","Nov","Dec"};

    scanf("%d/%d/%d", &d, &m, &y);

    printf("%d-%s-%d", d, mon[m-1], y);

    return 0;
}
