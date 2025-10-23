// Q80: Multiply two matrices. //

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
void main()
{
     int r1,c1,i,j,k,r2,c2;

    printf("Enter r1 and c1: ");
    scanf("%d %d", &r1, &c1);

    int m1[r1][c1];

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter r2 and c2: ");
    scanf("%d %d", &r2, &c2);

    int m2[r2][c2];

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    if(c1!=r2)
    {
        printf("Multiplication not possible.");
    }
    
    int result[r1][c2];

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            result[i][j]=0;
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            {
                result[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

}