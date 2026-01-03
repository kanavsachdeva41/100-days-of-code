// Q79: Perform diagonal traversal of a matrix. //

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int mat[m][n];

    // Read matrix elements
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    // Diagonal traversal
    for (int d = 0; d <= m + n - 2; d++) {
        if (d % 2 == 0) {
            // Traverse from top-right to bottom-left
            int i = (d < m) ? d : m - 1;
            int j = d - i;
            while (i >= 0 && j < n) {
                printf("%d ", mat[i][j]);
                i--;
                j++;
            }
        } else {
            // Traverse from bottom-left to top-right
            int j = (d < n) ? d : n - 1;
            int i = d - j;
            while (j >= 0 && i < m) {
                printf("%d ", mat[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}
