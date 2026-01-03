// Q70: Rotate an array to the right by k positions. //

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Number of times array to be rotated: ");
    scanf("%d", &k);

    k = k % n; // in case k > n

    int rotated[n];

    // Rotate array to the right by k positions
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
