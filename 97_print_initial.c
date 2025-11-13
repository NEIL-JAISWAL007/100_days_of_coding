/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char a[100];
    printf("Enter name: ");
    gets(a);
    printf("%c", a[0]);
    printf(".");
    for(int i = 0; a[i] != '\0'; i++) {
        if(a[i] == ' ' && a[i + 1] != '\0') {
            printf("%c", a[i + 1]);
            printf(".");
        }
    }
    return 0;
}
