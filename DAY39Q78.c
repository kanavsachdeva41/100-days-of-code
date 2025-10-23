// Q78: Find the sum of main diagonal elements for a square matrix.//

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
void main()
{
    int i,j,r,c;

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

    int diag[r],sum=0;
    for(i=0;i<r;i++)
    {
        diag[i]=arr[i][i];
        sum=sum+diag[i];
    }
    printf("%d",sum);
}