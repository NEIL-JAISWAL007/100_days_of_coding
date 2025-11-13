/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    printf("Enter a sentence: ");
    fgets(a, sizeof(a), stdin);
    int i = 0, start = 0, end;
    while(a[i] != '\0') {
        if(a[i] == ' ' || a[i] == '\n' || a[i] == '\0') {
            end = i - 1;
            while(start < end) {
                char t = a[start];
                a[start] = a[end];
                a[end] = t;
                start++;
                end--;
            }
            start = i + 1;
        }
        i++;
    }
    printf("%s", a);
    return 0;
}
