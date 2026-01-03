// Q64: Find the digit that occurs the most times in an integer number. //

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; // count of digits 0-9

    scanf("%lld", &num);

    // Count occurrence of each digit
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum count
    int max = 0, result = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}
