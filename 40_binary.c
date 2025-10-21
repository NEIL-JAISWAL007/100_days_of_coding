/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/
#include <stdio.h>

int main() {
    char bin[100];
    printf("Enter a binary number: ");
    scanf("%s", bin);
    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0')
            bin[i] = '1';
        else if (bin[i] == '1')
            bin[i] = '0';
    }
    printf("%s", bin);
    return 0;
}
