/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

int main() {
    enum status {SUCCESS, FAILURE, TIMEOUT};
    char s[10];
    enum status st;

    scanf("%s", s);

    if(strcmp(s,"SUCCESS")==0) st = SUCCESS;
    else if(strcmp(s,"FAILURE")==0) st = FAILURE;
    else if(strcmp(s,"TIMEOUT")==0) st = TIMEOUT;

    switch(st) {
        case SUCCESS: printf("Operation successful"); break;
        case FAILURE: printf("Operation failed"); break;
        case TIMEOUT: printf("Operation timed out"); break;
    }

    return 0;
}
