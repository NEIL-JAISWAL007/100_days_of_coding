/*
Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
    char a[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    int i;
    for(i = 0; a[i] != '\0'; i++) {
        if(a[i] == ' ') a[i] = '-';
    }
    printf("%s", a);
    return 0;
}
