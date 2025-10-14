// Q60: Count positive, negative, and zero elements in an array. //

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
void main()
{
    int n,pos=0,neg=0,zero=0;
    printf("Enter index of specified array: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("enter value of array: ");

    for(int i=0; i<n; i++)
    {
       scanf("%d", &arr[i]);

       if(arr[i]<0)
       {
        neg++;
       }
       else if (arr[i]>0)
       {
        pos++;
       }
       else 
       {
        zero++;
       }
    }
    printf("Positive: %d\nNegative: %d\nZero: %d", pos, neg, zero);
}