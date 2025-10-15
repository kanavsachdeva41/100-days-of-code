// Q62: Reverse an array without taking extra space. //

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
void main()
{
    int n,num,i;

    printf("Enter index of specified array: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("enter value of array: ");

    for(i=0; i<n; i++)
    {
       scanf("%d", &arr[i]);
    }
    
    printf("Reverse array: ");

    for(int i=n-1;i>=0;i--)
    {
        printf("%d ", arr[i]);
    }

}