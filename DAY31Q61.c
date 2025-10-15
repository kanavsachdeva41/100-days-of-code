// Q61: Search for an element in an array using linear search. //

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main()
{
    int n,num,i,found=0;
    printf("Enter index of specified array: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("enter value of array: ");

    for(i=0; i<n; i++)
    {
       scanf("%d", &arr[i]);
    }

    printf("enter the number we want to search: ");
    scanf("%d", &num);

    for(int i=0;i<n;i++)
    {
    if(arr[i]==num)
    {
        printf("Number is found at index: %d", i);
        found=1;
    }
    }

    if(!found)
    {
        printf("-1\n");
    }
    return 0;
}
