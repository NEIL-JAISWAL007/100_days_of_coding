/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("Enter name: ");
    gets(a);
    int n = strlen(a);
    int last = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] == ' ') {
            last = i + 1;
            break;
        }
    }
    printf("%c", a[0]);
    printf(".");
    for(int i = 0; a[i] != '\0'; i++) {
        if(a[i] == ' ' && i + 1 != last) {
            printf("%c", a[i + 1]);
            printf(".");
        }
    }
    printf(" ");
    for(int i = last; a[i] != '\0'; i++)
        printf("%c", a[i]);
    return 0;
}
