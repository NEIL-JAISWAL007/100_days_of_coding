/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() {
    char a[100], b[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    int i, j = 0;
    for(i = 0; a[i] != '\0'; i++) {
        if(a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u' &&
           a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U')
            b[j++] = a[i];
    }
    b[j] = '\0';
    printf("%s", b);
    return 0;
}
