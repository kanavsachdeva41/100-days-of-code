// Q76: Check if a matrix is symmetric. //

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
void main()
{
    int i,j,r,c,symm=1;

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
        for(j=0;j<c;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                symm=0;
                break;
            }
        }
        if (symm==0)
        break;
    }
    
    if(symm==1)
    {
        printf("True\n");
    }
    else
    {
       printf("False\n");
    }
    
}