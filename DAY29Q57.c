// Q57: Find the sum of array elements. //

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter index of specified array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter value of array: ");
    for(int i=0; i<n; i++)
    {
    scanf("%d", &arr[i]);
    sum=sum+arr[i];
    }
    printf("sum of array is:%d",sum);

}