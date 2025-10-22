// Q69: Find the second largest element in an array. //

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
void main()
{
    int n,i;
    
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of array: ");

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    int max1,max2;

    if(a[0]>a[1])
    {
        max1=a[0];
        max2=a[1];
    }
    else
    {
        max1=a[1];
        max2=a[0];
    }

    for(i=2;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if (a[i]>max2)
        {
            max2=a[i];
        }
    }
    printf("Second largest element of array is: %d", max2);
}