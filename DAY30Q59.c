// Q59: Count even and odd numbers in an array. //

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
void main()
{
    int n,even=0,odd=0;
    printf("Enter index of specified array: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("enter value of array: ");

    for(int i=0; i<n; i++)
    {
       scanf("%d", &arr[i]);

       if(arr[i]%2==0)
       {
          even++;
       }
       else
       {
          odd++;
       }
    }   

    printf("Even count: %d\nOdd count: %d", even, odd);

}