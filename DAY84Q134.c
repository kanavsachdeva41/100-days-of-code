// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

enum prob
{
    SUCCESS,
    FAILURE,
    TIMEOUT,
};

void main()
{
    char probab[7];

    enum prob p;

    printf("Enter the probability: ");
    scanf("%s", probab);

    if(strcmp(probab,"SUCCESS")==0) p=SUCCESS;
    else if (strcmp(probab,"FAILURE")==0) p=FAILURE;
    else p=TIMEOUT;

    switch(p){
    case SUCCESS: printf("Operation Successfull");
    break;
    case FAILURE: printf("Operation Failed");
    break;
    case TIMEOUT: printf("Operation Incomplete");
    break;
    }
}