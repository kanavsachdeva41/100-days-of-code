// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

int first(int nums[],int n,int target)
{
    int start=0,end=n-1,result=-1;

    while(start<=end)
    {
        int mid=(start+end)/2;
        if(nums[mid]==target)
        {
            result=mid;
            end=mid-1;
        }
        else if (nums[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return result;
}

int last(int nums[],int n, int target)
{
    int start=0,end=n-1,result=-1;

    while(start<=end)
    {
        int mid=(start+end)/2;
        if(nums[mid] == target)
        {
            result=mid;
            start=mid+1;
        }
        else if(nums[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return result;
}

int main()
{
    int n,target;

    printf("Enter index of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter element of array: ");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int fir=first(nums,n,target);
    int las=last(nums,n,target);

    printf("First occurence and last occurence of %d are %d and %d",target,fir,las);

    return 0;
}