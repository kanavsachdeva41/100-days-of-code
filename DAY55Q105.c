// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>
int most(int n,int *arr);
int main()
{
    int n;

    printf("Enter size n of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements of array nums: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);
    }

    int result=most(n,nums);

    printf("Majority occuring element in array is: %d", result);

}

int most(int n, int *arr)
{
    int max,count=0,num;

    for(int i=0;i<n;i++)
    {
        if(count == 0)
        {
            num=arr[i];
            count++;
        }
        else if (num==arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }


    if(count>n/2)
    {
        return num;
    }
    else
    {
        return -1;
    }
}
