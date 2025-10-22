// Q65: Search in a sorted array using binary search. //

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
void main()
{
    int i,n,srch;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &srch);

    int result=binarysrch(arr,n,srch);

    if (result != -1)
    {
        printf("Element found at index %d", result);
    }
    else
    {
        printf("Element not found: ");
    }

}

int binarysrch(int arr[],int n,int srch)
{
    int low=0,high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==srch)
        {
            return mid;
        }
        else if(arr[mid]<srch)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
