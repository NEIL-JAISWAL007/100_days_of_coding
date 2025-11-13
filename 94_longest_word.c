/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    printf("Enter a sentence: ");
    fgets(a, sizeof(a), stdin);
    char w[50], lw[50];
    int i = 0, j = 0, max = 0;
    while(1) {
        if(a[i] == ' ' || a[i] == '\n' || a[i] == '\0') {
            w[j] = '\0';
            if(strlen(w) > max) {
                max = strlen(w);
                strcpy(lw, w);
            }
            j = 0;
            if(a[i] == '\0') break;
        } else {
            w[j++] = a[i];
        }
        i++;
    }
    printf("%s", lw);
    return 0;
}
