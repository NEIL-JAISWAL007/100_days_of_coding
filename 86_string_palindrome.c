/*
Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("Enter a string: ");
    scanf("%s", a);
    int n = strlen(a), i, f = 1;
    for(i = 0; i < n / 2; i++) {
        if(a[i] != a[n - i - 1]) {
            f = 0;
            break;
        }
    }
    if(f) printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}
