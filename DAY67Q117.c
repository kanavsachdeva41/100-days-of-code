// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array. //

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>
void main()
{
    int n,m;

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    int nums1[m],nums2[n];

    printf("Enter elements of first array: ");

    for(int i=0;i<m;i++)
    {
        scanf("%d", &nums1[i]);
    }

    printf("Enter elements of second array: ");

    for(int i=0;i<n;i++)
    {
        scanf("%d", &nums2[i]);
    }

    int arr[m+n];

    for(int i=0;i<m;i++)
    {
        arr[i]=nums1[i];
    }

    for(int i=0;i<n;i++)
    {
        arr[m+i]=nums2[i];
    }

    int size = m + n;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}