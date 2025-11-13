/*
Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

int main() {
    char a[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    int i, s = 0, d = 0, sp = 0;
    for(i = 0; a[i] != '\0'; i++) {
        if(a[i] == ' ') s++;
        else if(a[i] >= '0' && a[i] <= '9') d++;
        else if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'));
        else if(a[i] != '\n') sp++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d", s, d, sp);
    return 0;
}
