// Q74: Find the transpose of a matrix. //

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>
void main()
{
    int i,j,r,c,rowsum[100];

    printf("Enter r and c: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    arr[j][i]=arr[i][j];

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}