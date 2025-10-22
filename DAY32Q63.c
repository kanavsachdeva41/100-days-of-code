// Q63: Merge two arrays. //

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int x,y,i,j;

    printf("Enter index of specified array: ");
    scanf("%d", &x);
    
    int arr[x];

    printf("enter value of array: ");

    for(i=0; i<x; i++)
    {
       scanf("%d", &arr[i]);
    }

    printf("Enter index of specified array: ");
    scanf("%d", &y);
    
    int str[y];

    printf("enter value of array: ");

    for(j=0; j<y; j++)
    {
       scanf("%d", &str[j]);
    }

    int c[100];

    for (i=0;i<x;i++)
    {
        c[i]=arr[i];
    }
    for (j=0;j<y;j++)
    {
        c[x+j]=str[j];
    }

    printf("Merged array: ");
    for(int k=0; k<x+y; k++)
    {
        printf("%d ", c[k]);
    }

    return 0;

}