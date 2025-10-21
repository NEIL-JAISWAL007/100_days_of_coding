/*
Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int b = 0; 
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int a = (num >> i) & 1;
        if (a) b = 1;
        if (b) printf("%d", a);
    }
    if (!b) printf("0");
    return 0;
}
