// Q73: Find the sum of each row of a matrix and store it in an array. //

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

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
    
    for(i=0;i<r;i++)
    {
        int sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
        rowsum[i]=sum;
    }

    for(i=0;i<r;i++)
    {
        printf("%d ", rowsum[i]);
    }
    
}
